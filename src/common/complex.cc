//  copyright 2018 Cedric Lemaitre
#include "complex.hpp"

namespace descimag {
namespace data {
  Complex::Complex(const flt_t & real, const flt_t & imag) {
    real_ = real;
    imag_ = imag;
  }

  Complex::Complex() {
    real_ = 0.0f;
    imag_ = 0.0f;
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
  Complex & Complex::operator=(const Complex & val) {
  this->set_real(val.get_real());
  this->set_imag(val.get_imag());

  return *this;
  }
  descimag::data::Complex* 
      double_vector_to_array_double(
          const std::vector<descimag::data::Complex> & v) {
    int size_v = v.size();
    descimag::data::Complex * array_d;
   array_d = new descimag::data::Complex[size_v];

   for (int i=0; i<size_v; i++){
     array_d[i] = v[i];
   }
   return array_d;

  }

  descimag::data::Complex * 
      double_vector_to_array_complex(
          const std::vector<double> & v) {
        int size_v = v.size();
        descimag::data::Complex * array_c = 
            new descimag::data::Complex[size_v];
        for (int i=0; i<size_v; i++) {
          array_c[i].set_real(v[i]);
          array_c[i].set_imag(0.0f);
        }
        return array_c;
      }
}  //  namespace data
}  //  namespace descimag
