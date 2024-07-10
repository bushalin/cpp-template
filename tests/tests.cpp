#include <gtest/gtest.h>
#include "another.hpp"

TEST(SampleAppTest, NameTest) {
    Hasib h;
    ASSERT_EQ("Md. Hasibul Hasan", h.GetName());
}

TEST(SampleAppTest, NameNotNull) {
    Hasib h;
    ASSERT_NE("", h.GetName());
}
