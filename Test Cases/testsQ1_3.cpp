
#include "Q1_3.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2b-----------------
TEST(Question2b, First) {
char* t1=(char*)"Hello World";
char* t2=(char*)"Test String";
char* act_res=(char*)"Test";
char* r=Strncpy(t1,t2,4);

for(int i=0; i<4;i++)
ASSERT_EQ(act_res[i],r[i]);

}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
