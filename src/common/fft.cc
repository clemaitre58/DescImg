//  copyright Cedric Lemaitre 2018
#include <cstdlib>
#include <cmath>
#include "fft.hpp"

namespace descimag {
namespace fft {
int32 FFT(const uint8 & dir, const uint16 & siz, 
          descimag::data::Complex in_data, 
          descimag::data::Complex * out_data) {
   // int32 n,i,i1,j,k,i2,l,l1,l2;
  //  TODO : verify if m is the siz!
  
  int32 m = siz; 
  int32 i1, k, i2, l, l1, l2;
  flt_t c1,c2,tx,ty,t1,t2,u1,u2,z;

  flt_t * x = (flt_t *)malloc(sizeof(flt_t) * siz);
  flt_t * y = (flt_t *)malloc(sizeof(flt_t) * siz);

  cpy_complex_flt(in_data, x, y, siz);
	// TODO: copy x and y to the dest_img
  // TODO: verified the identation

   //  Calculate the number of points
   int32 n = 1;
   for (int32 i=0; i<m; i++) 
      n *= 2;

   //  Do the bit reversal
   i2 = n >> 1;
   int32 j = 0;
   for (int32 i=0; i<n-1; i++) {
      if (i < j) {
         tx = x[i];
         ty = y[i];
         x[i] = x[j];
         y[i] = y[j];
         x[j] = tx;
         y[j] = ty;
      }  // if (i<j)
      k = i2;
      while (k <= j) {
         j -= k;
         k >>= 1;
      }  // while (k <= j)
      j += k;
   }  //  for i < n-1

   //  Compute the FFT
   c1 = -1.0; 
   c2 = 0.0;
   l2 = 1;
   for (int32 l=0; l<m; l++) {
      l1 = l2;
      l2 <<= 1;
      u1 = 1.0; 
      u2 = 0.0;
      for (int32 j=0; j<l1; j++) {
         for (int32 i=j; i<n; i+=l2) {
            i1 = i + l1;
            t1 = u1 * x[i1] - u2 * y[i1];
            t2 = u1 * y[i1] + u2 * x[i1];
            x[i1] = x[i] - t1; 
            y[i1] = y[i] - t2;
            x[i] += t1;
            y[i] += t2;
         }  //  for i
         z =  u1 * c1 - u2 * c2;
         u2 = u1 * c2 + u2 * c1;
         u1 = z;
      }  //  for j
      c2 = sqrt((1.0 - c1) / 2.0);
      if (dir == 1) 
         c2 = -c2;
      c1 = sqrt((1.0 + c1) / 2.0);
   }  // for l

   /* Scaling for forward transform */
   if (dir == 1) {
      for (int32 i=0; i<n; i++) {
         x[i] /= n;
         y[i] /= n;
      }
   }
   // TODO : copy x y to complex out 
   
   return 0;
}  //  function fft

int32 cpy_complex_flt(descimag::data::Complex * c_in, flt_t * flt_out_x, 
                      flt_t * flt_out_y, const int32 & siz) {
  
  for (int32 i=0; i<siz; i++){
    flt_out_x[i] = c_in[i].get_real();
    flt_out_y[i] = c_in[i].get_imag();
  }
  return 0;
}  //  function cpy_flt_complex
int32 cpy_flt_complex(flt_t * flt_in_x, flt_t * flt_in_y, 
                      descimag::data::Complex * c_out, const int32 & siz) {
  
  for (int32 i=0; i<siz; i++){
    c_out[i].set_real(flt_in_x[i]);
    c_out[i].set_imag(flt_in_y[i]);
  }
  return 0;
}  //  function cpy_complex_flt
}  //  namespace fft
}  //  namespace descimag
