
#include "Q2.cpp"
#include <gtest/gtest.h>

TEST(Question1, First) {
   				
char* t1=(char*)"THIS IS A TEST STRING!";
char* r1=convertToMorseCode(t1);
char* act1=(char*)"- .... .. .../.. .../.-/- . ... -/... - .-. .. -. --. -.-.--/";
	
int i=0;
while(act1[i]!='\0'){
	ASSERT_EQ(act1[i],r1[i]); 
i++;
	}

}

TEST(Question1, Second){

char* t2=(char*)"- .... .. .../.. .../.-/- . ... -/... - .-. .. -. --. -.-.--/";
char* act2=(char*)"THIS IS A TEST STRING!";
char* r2=convertToString(t2);

	
int i=0;
while(act2[i]!='\0'){
	ASSERT_EQ(act2[i],r2[i]); 
i++;
	}

}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
