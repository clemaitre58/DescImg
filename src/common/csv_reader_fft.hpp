//  copyright Cedric Lemaitre 2019
#ifndef _SRC_COMMON_CSV_READER_FFT_HPP_
#define _SRC_COMMON_CSV_READER_FFT_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "type_def.hpp"
#include "complex.hpp"

namespace descimag {
namespace csv_reader_fft {
class CsvReaderFFT{
 private:
  std::string file_name_;
  std::vector<double> val_input_;
  std::vector<descimag::data::Complex> val_ouput_fft_;
  int nb_col_csv_;
  int nb_line_;
  void parse_line_(const std::string &);
 public:
  CsvReaderFFT(std::string);
  descimag::data::Complex get_val_fft_vector(int index) const;
  double get_val_input_vector(int index) const;
  int get_number_row() const;
  std::vector<double> get_val_input() const;
  int get_size_val_input() const;
  int get_size_val_output_fft() const;  


};
}
}
#endif  //  _SRC_COMMON_CSV_READER_FFT_HPP_


