// "Copyright [2018] Cedric Lemaitre"
#include <gtest/gtest.h>

#include <cmath>

#include <common/complex.hpp>
// Include the gtest library

// Create our own test to check the different function of our class
// This function will take two arguments:
// * The test case name
// * The test name

TEST(Copy_real_2_img_3, OperatorEqual) {
   	flt_t x = 2;
    flt_t y = 3;
    descimag::data::Complex a;
    descimag::data::Complex b(x, y);
    a = b;
    GTEST_ASSERT_EQ(a.get_real(), 2);
    GTEST_ASSERT_EQ(a.get_imag(), 3);
}
