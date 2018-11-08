#include <iostream>
#include <gtest/gtest.h>

#include "foo.hpp"

class TestFixture : public ::testing::Test {
protected:
  void SetUp(){
    std::cout << "SetUp()" << std::endl;
  }

  void TearDown(){
    std::cout << "TearDown()" << std::endl;
  }
};



TEST_F (TestFixture, shouldCompile) {
    std::cout << "shouldCompile" << std::endl;
    ASSERT_TRUE(true); // works, maybe optimized out?
    ASSERT_TRUE(foo(1, 1) == 2);
    ASSERT_TRUE("hi" == "hallo"); // undefined reference
}

TEST_F (TestFixture, testQt) {
    ASSERT_EQ(fooQt(), 0);
}

TEST_F (TestFixture, testZip) {
    ASSERT_EQ(fooZip(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
