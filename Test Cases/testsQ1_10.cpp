
#include "Q1_10.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2I-----------------
TEST(Question2h, First) {
char* t1=(char*)"Hello World";
char* r=SubStr(t1,3,3)
ASSERT_EQ('l',r[0]);
ASSERT_EQ('o',r[1]);
ASSERT_EQ(' ',r[2]);
ASSERT_EQ('\0',r[3]);

}

TEST(Question2h, second) {
char* t1=(char*)"Hello World";
char* r=SubStr(t1,8,5)
ASSERT_EQ('r',r[0]);
ASSERT_EQ('l',r[1]);
ASSERT_EQ('\0',r[3]);

}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
