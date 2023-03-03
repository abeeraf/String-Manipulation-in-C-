
#include "Q1_6.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2E-----------------
TEST(Question2e, First) {
char* t1=(char*)"Hello";
char* t2=(char*)"World2";
ASSERT_GT(0,StrCmp(t1,t2));

}

TEST(Question2e, Second) {
char* t1=(char*)"Hello";
char* t2=(char*)"Hello";
ASSERT_EQ(0,StrCmp(t1,t2));
}


TEST(Question2e, Third) {
char* t1=(char*)"Hello";
char* t2=(char*)"World2";
ASSERT_LT(0,StrCmp(t2,t1));
}

TEST(Question2e, Fourth) {
char* t1=(char*)"Hello";
char* t2=(char*)"Hella";
ASSERT_LT(0,StrCmp(t1,t2));
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
