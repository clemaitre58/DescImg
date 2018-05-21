//  copyright Cedric Lemaitre 2018
#ifndef _SRC_COMMON_COMPLEX_H_
#define _SRC_COMMON_COMPLEX_H_
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
};  // Class complex
//  TODO : Overload operator =
Complex & operator=(const Complex & val) {
  this->set_real(val.get_real());
  this->set_imag(val.get_imag());

  return this;
}
}  // namespace data
}  // namespace descimag
#endif  //  _SRC_COMMON_COMPLEX_H_


