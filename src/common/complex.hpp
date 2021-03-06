//  copyright Cedric Lemaitre 2018
#ifndef _SRC_COMMON_COMPLEX_H_
#define _SRC_COMMON_COMPLEX_H_

#include <vector>
#include "type_def.hpp"

namespace descimag {
namespace data {
class Complex {
 private:
  flt_t real_;
  flt_t imag_;
 public:
  Complex(const flt_t &, const flt_t &);
  Complex();
  flt_t get_real() const;
  flt_t get_imag() const;
  void set_real(const flt_t &);
  void set_imag(const flt_t &);
  Complex & operator=(const Complex &);
};  // Class complex

  descimag::data::Complex* 
  double_vector_to_array_double(const std::vector<descimag::data::Complex> &);
  descimag::data::Complex* 
  double_vector_to_array_complex(const std::vector<double> &);
}  // namespace data
}  // namespace descimag
#endif  //  _SRC_COMMON_COMPLEX_H_


