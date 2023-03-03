
#include "Q1_1.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2A-----------------
TEST(Question2a, First) {
char* t1=(char*)"THIS IS A TEST STRING!";
ASSERT_EQ(23,Strlen(t1));
}

TEST(Question2a, Second) {
char* t2=(char*)"Hello World";
ASSERT_EQ(12,Strlen(t2));
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
