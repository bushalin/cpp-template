#include <gtest/gtest.h>
#include "example.h"

TEST(SampleAppTest, NameTest) {
    ASSERT_EQ("Hasib", GetAuthor());
}

TEST(SampleAppTest, NameNotNull) {
    ASSERT_NE("", GetAuthor());
}
