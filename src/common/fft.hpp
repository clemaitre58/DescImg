//  copyright Cedric Lemaitre 2018
#ifndef _SRC_COMMON_FTT_HPP_
#define _SRC_COMMON_FTT_HPP_

#include "type_def.hpp"
#include "complex.hpp"

namespace descimag {
namespace fft {
  /*
   This computes an in-place complex-to-complex FFT 
   x and y are the real and imaginary arrays of 2^m points.
   dir =  1 gives forward transform
   dir = -1 gives reverse transform 
*/

int32 FFT(uint8, uint16, const descimag::data::Complex &, 
				 descimag::data::Complex *);
/// function cpy_conplex_flt
//  Copy data form a complex object to flt_t *
//  TODO : make doc 
//  return 0 if successed
int32 cpy_complex_flt(descimag::data::Complex * c_in, flt_t * flt_out_x, 
                      flt_t * flt_out_y, const int32 & siz) {
}  // namespace fft
}  // namespace descimag
#endif  //  _SRC_COMMON_FFT_HPP_
