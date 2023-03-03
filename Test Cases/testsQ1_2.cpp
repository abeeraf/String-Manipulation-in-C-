
#include "Q1_2.cpp"
#include <gtest/gtest.h>

//-------------------Question No 2b-----------------
TEST(Question2b, First) {
char* t1=(char*)"Hello World";
char* t2=(char*)"Test String";
char* act_res=(char*)"Test String";
char* r=Strcpy(t1,t2);

for(int i=0; i<11;i++)
ASSERT_EQ(act_res[i],r[i]);

}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
