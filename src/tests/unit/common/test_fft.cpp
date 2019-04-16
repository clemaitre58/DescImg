// "Copyright 2019 Cedric Lemaitre"
#include <gtest/gtest.h>

#include <cmath>
#include <vector>

#include <common/complex.hpp>
#include <common/fft.hpp>
#include <common/csv_reader_fft.hpp>

// Include the gtest library

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name

TEST(Test_abs_error_each_elt, OperatorResFFTOK) {
  descimag::data::Complex * in;
  descimag::data::Complex * out;
  descimag::csv_reader_fft::CsvReaderFFT a("../data/data_fft.csv");
  std::vector<double> data_in_d = a.get_val_input();
  in = descimag::data::double_vector_to_array_complex(data_in_d);
  out = new descimag::data::Complex[a.get_size_val_input()];
  int32 rtn = descimag::fft::FFT(1, 1024, in, out);
      
  // GTEST_ASSERT_EQ(a.get_real(), 2);
  // GTEST_ASSERT_EQ(a.get_imag(), 3);
}
