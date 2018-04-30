//  copyright Cedric Lemaitre 2018
#include "fft.hpp"

namespace descimag {
namespace fft {
  /*
   This computes an in-place complex-to-complex FFT 
   x and y are the real and imaginary arrays of 2^m points.
   dir =  1 gives forward transform
   dir = -1 gives reverse transform 
*/
int32 FFT(uint8 dir, uint16 m, const descimag::data::Complex & src_img, 
				 descimag::data::Complex * dest_img) {
   int32 n,i,i1,j,k,i2,l,l1,l2;
   flt_t c1,c2,tx,ty,t1,t2,u1,u2,z;

	// TODO: copy the src_img in x and y
	// TODO: copy x and y to the dest_img

   //  Calculate the number of points
   n = 1;
   for (i=0; i<m; i++) 
      n *= 2;

   //  Do the bit reversal
   i2 = n >> 1;
   j = 0;
   for (i=0; i<n-1; i++) {
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
   for (l=0;l<m;l++) {
      l1 = l2;
      l2 <<= 1;
      u1 = 1.0; 
      u2 = 0.0;
      for (j=0;j<l1;j++) {
         for (i=j;i<n;i+=l2) {
            i1 = i + l1;
            t1 = u1 * x[i1] - u2 * y[i1];
            t2 = u1 * y[i1] + u2 * x[i1];
            x[i1] = x[i] - t1; 
            y[i1] = y[i] - t2;
            x[i] += t1;
            y[i] += t2;
         }
         z =  u1 * c1 - u2 * c2;
         u2 = u1 * c2 + u2 * c1;
         u1 = z;
      }
      c2 = sqrt((1.0 - c1) / 2.0);
      if (dir == 1) 
         c2 = -c2;
      c1 = sqrt((1.0 + c1) / 2.0);
   }

   /* Scaling for forward transform */
   if (dir == 1) {
      for (i=0;i<n;i++) {
         x[i] /= n;
         y[i] /= n;
      }
   }
   
   return 0;
}  //  function fft
}  //  namespace fft
}  //  namespace descimag
