//  copyrigth Cedric Lemaitre 2019

#include "csv_reader_fft.hpp"


namespace descimag {
namespace csv_reader_fft{
CsvReaderFFT::CsvReaderFFT(std::string f) {
  file_name_ = f;
  nb_col_csv_ = 2;
  std::ifstream if_file(file_name_);
  int count_line = 0;
  if (if_file.is_open()) {
    std::string val_line;
    while (getline(if_file, val_line)) {
      if (count_line != 0) {
        parse_line_(val_line);
      }
      count_line ++;
    }  //  while if_file.good()
  } else {
    std::cout << "Can't open file";
  }  // if open file
}

descimag::data::Complex CsvReaderFFT::get_val_fft_vector(int index) const {
  return val_ouput_fft_[index];
}

double CsvReaderFFT::get_val_input_vector(int index) const {
  return val_input_[index];
}
void CsvReaderFFT::parse_line_(const std::string & l) {
  std::stringstream line_steam(l);
  std::string cell;
  int count = 0;
  double d_input = 0.0f;
  double d_output_real = 0.0f;
  double d_output_img = 0.0f;
  while (std::getline(line_steam, cell, ',')) {
         switch (count) {
         case 0:
         count ++;
         break;
         case 1:
         d_input = atof(cell.c_str());
         count ++;
         break;
         case 2:
         d_output_real = atof(cell.c_str());
         count ++;
         break;
         case 3:
         d_output_img = atof(cell.c_str());
         count ++;
         break;
         default:
         std::cout << "Warning : value of count out of range [0:2]";
         }          
  }// end while
  val_input_.push_back(d_input);
  val_ouput_fft_.push_back(descimag::data::Complex(d_output_real, d_output_img));
}//  end read CSV
int CsvReaderFFT::get_number_row() const {
    return val_input_.size();
}
}
}
