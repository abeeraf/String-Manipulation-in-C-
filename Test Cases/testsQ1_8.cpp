
#include "Q1_8.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2G-----------------
TEST(Question2g, First) {
char* t1=(char*)"Hello World";

char** r= StrTok(t1,' ');
ASSERT_EQ('H',r[0][0]);
ASSERT_EQ('o',r[0][4]);
ASSERT_EQ('l',r[0][2]);

ASSERT_EQ('W',r[1][0]);
ASSERT_EQ('d',r[1][4]);
ASSERT_EQ('o',r[1][1]);

}

TEST(Question2g, Second) {
char* t1=(char*)"Hello?World?OOP";

char** r= StrTok(t1,'?');
ASSERT_EQ('H',r[0][0]);
ASSERT_EQ('o',r[0][4]);
ASSERT_EQ('l',r[0][2]);

ASSERT_EQ('W',r[1][0]);
ASSERT_EQ('d',r[1][4]);
ASSERT_EQ('o',r[1][1]);

ASSERT_EQ('O',r[2][0]);
ASSERT_EQ('O',r[2][1]);
ASSERT_EQ('P',r[2][2]);

}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
