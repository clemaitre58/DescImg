//  copyright Cedric Lemaitre 2018
#ifndef _SRC_COMMON_FTT_HPP_
#define _SRC_COMMON_FTT_HPP_

#include "type_def.hpp"
#include "complex.hpp"

namespace descimag {
namespace fft {
///  function FFT
//   compute FFT on Complex Data
//
//   return 0 if end properly
//   
//   * const uint8 & dir : 1 gives forward transform, 
//   -1 gives reverses transform
//
//   * const uint16 & siz : size of a input data. Should be a 2^m points
//   * descimag::data::Complex * in_data : input data for image place 
//   imaginary part to 0
//   * descimag::data::Complex * out_data : output data after FFT compute
int32 FFT(uint8, uint16, descimag::data::Complex *,
          descimag::data::Complex *);

///  function cpy_conplex_flt
//   Copy data form a complex * object to flt_t *
//  
//   return 0 if successed
//   
//   * descimag::data::Complex * c_in : data to copy in flt_t array
//   * flt_t * flt_out_x : array which contain real part of complex structure
//   * flt_t * flt_out_y : array which contain imag part of complex structure
//   * const int32 & siz : size of array
int32 cpy_complex_flt(descimag::data::Complex *, flt_t *, flt_t * ,
                      const int32 &);

///  function cpy_flt_conplex
//   Copy data form flt_t * arrays to complex * object
//  
//   return 0 if successed
//   
//   * flt_t * flt_in_x : array which contain real part of complex structure
//   * flt_t * flt_in_y : array which contain imag part of complex structure
//   * descimag::data::Complex * c_out : oject which receive data from 
//   flt_t array
//   * const int32 & siz size of array
int32 cpy_flt_complex(flt_t *, flt_t *, descimag::data::Complex *, 
                      const int32 &);
}  // namespace fft
}  // namespace descimag
#endif  //  _SRC_COMMON_FFT_HPP_
