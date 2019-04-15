//  copyrigth Cedric Lemaitre 2019

#include "csv_reader_fft.hpp"


namespace descimag {
namespace csv_reader_fft{
CsvReaderFFT::CsvReaderFFT(std::string f) {
  file_name_ = f;
  nb_col_csv_ = 2;
  std::ifstream if_file(file_name_);
  // TODO: traiter la premiere ligne particulèrement
  if (if_file.is_open()) {
    std::string val_line;
    while (if_file.good()) {
      getline(if_file, val_line);
      parse_line_(val_line);
    }  //  while if_file.good()
  } else {
    std::cout << "Can't open file";
  }  // if open file
}
descimag::data::Complex CsvReaderFFT::get_val_fft_vector(int index) const {
  return val_ouput_fft_[index];
}
void CsvReaderFFT::parse_line_(const std::string & l) {

}
}
}
