
#include "Q1_9.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2H-----------------
TEST(Question2h, First) {
char* t1=(char*)"Hello World";
char* t2=(char*)"World";

ASSERT_EQ(6,StrFind(t1,t2));
}

TEST(Question2h, Second) {
char* t1=(char*)"Hello World";
char* t2=(char*)"World2";

ASSERT_EQ(-1,StrFind(t1,t2));
}

TEST(Question2h, Third) {
char* t1=(char*)"Hello World Hello";
char* t2=(char*)"Hello";

ASSERT_EQ(0,StrFind(t1,t2));
}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
