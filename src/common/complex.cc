//  copyright 2018 Cedric Lemaitre
#include "complex.hpp"

namespace descimag {
namespace data {
  Complex::Complex(const flt_t & real, const flt_t & imag) {
    real_ = real;
    imag_ = imag;
  }

  flt_t Complex::get_real() const {
    return real_;
  }

  flt_t Complex::get_imag() const {
    return imag_;
  }

  void Complex::set_real(const flt_t & real) {
    real_ = real;
  }

  void Complex::set_imag(const flt_t & imag) {
    imag_ = imag;
  }
}  //  namespace data
}  //  namespace descimag
