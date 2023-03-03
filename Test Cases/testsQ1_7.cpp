
#include "Q1_7.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2F-----------------
TEST(Question2f, First) {
char* t1=(char*)"Hello11";
char* t2=(char*)"World2";
ASSERT_GT(0,StrnCmp(t1,t2,3));
}

TEST(Question2f, Second) {
char* t1=(char*)"Hello";
char* t2=(char*)"Helto";
ASSERT_EQ(0,StrnCmp(t1,t2,3));
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
