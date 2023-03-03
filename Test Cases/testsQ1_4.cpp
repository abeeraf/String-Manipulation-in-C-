
#include "Q1_4.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2C-----------------
TEST(Question2c, First) {
char* t1=(char*)"Hello";
char* t2=(char*)"World";
char* act_res=(char*)"HelloWorld";
char* r=StrCat(t1,t2);
for(int i=0; i<10;i++)
ASSERT_EQ(act_res[i],r[i]);
}


TEST(Question2c, Second) {
char* t11=(char*)"Object Oriented ";
char* t22=(char*)"Programming";
char* act_res1=(char*)"Object Oriented Programming";
char* r1=StrCat(t11,t22);
for(int i=0; i<26;i++)
ASSERT_EQ(act_res1[i],r1[i]);
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
