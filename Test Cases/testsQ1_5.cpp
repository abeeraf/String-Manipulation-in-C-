
#include "Q1_5.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2D-----------------
TEST(Question2d, First) {
char* t1=(char*)"Hello";
char* t2=(char*)"World";
char* act_res=(char*)"HelloWor";
char* r=StrnCat(t1,t2,3);
for(int i=0; i<8;i++)
ASSERT_EQ(act_res[i],r[i]);
}


TEST(Question2d, Second) {
char* t11=(char*)"Object Oriented ";
char* t22=(char*)"Programming";
char* act_res1=(char*)"Object Oriented Progra";
char* r1=StrnCat(t11,t22,6);
for(int i=0; i<21;i++)
ASSERT_EQ(act_res1[i],r1[i]);
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
