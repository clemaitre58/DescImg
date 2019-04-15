// "Copyright 2019 Cedric Lemaitre"
#include <gtest/gtest.h>

#include <common/csv_reader_fft.hpp>

// Include the gtest library

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name

TEST(great_number_line, Readproperly) {
  descimag::csv_reader_fft::CsvReaderFFT a("../data/data_fft.csv");
  int nb_rows = a.get_number_row();
  GTEST_ASSERT_EQ(nb_rows, 1024);
}
TEST(great_last_value, Readproperly) {
  descimag::csv_reader_fft::CsvReaderFFT a("../data/data_fft.csv");
  
  descimag::data::Complex last_c = a.get_val_fft_vector(1023);
  double last_input = a.get_val_input_vector(1023);

  double pres = 0.000001;
  ASSERT_NEAR(last_input, -0.06736484857605893, pres);
  ASSERT_NEAR(last_c.get_real(), 3.72208623504690, pres);
  ASSERT_NEAR(last_c.get_imag(), 3.3211731637228903, pres);
}
TEST(great_first_value, Readproperly) {
  descimag::csv_reader_fft::CsvReaderFFT a("../data/data_fft.csv");
  
  descimag::data::Complex first_c = a.get_val_fft_vector(0);
  double first_input = a.get_val_input_vector(0);
  double pres = 0.000001;

  ASSERT_NEAR(first_input, 0.07132897789269446, pres);
  ASSERT_NEAR(first_c.get_real(), -2.1397741336196683, pres);
  ASSERT_NEAR(first_c.get_imag(), 0.0, pres);
}
