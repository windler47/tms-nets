//
// Created by Aleksandr Maksimov on 27.10.2020.
//

#include "../../include/tms-nets/niederreiter2.hpp"
#include "gtest/gtest.h"

TEST(NiederreiterTest, Fail) {
// This test is named "Fail", and belongs to the "NiederreiterTest"
// test case.
EXPECT_EQ(1, 1);
//EXPECT_EQ(1, -1);

// <TechnicalDetails>
//
// EXPECT_EQ(expected, actual) is the same as
//
//   EXPECT_TRUE((expected) == (actual))
//
// except that it will print both the expected value and the actual
// value when the assertion fails.  This is very helpful for
// debugging.  Therefore in this case EXPECT_EQ is preferred.
//
// On the other hand, EXPECT_TRUE accepts any Boolean expression,
// and is thus more general.
//
// </TechnicalDetails>
}