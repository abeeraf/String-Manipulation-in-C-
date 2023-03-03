char* convertToMorseCode(char* s1)
{
int c=0;

//declare all alphabets 
char alpha[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N'
,'O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5',
'6','7','8','9','.',',',''','!','/','(',')','&'}

//declare all morse code letters 
char morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
"-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--",
"....-",".....","-....","--...","---..","----.",".-.-.-","--..--",
"..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-..."}

/*
while ((s1[c]!='\0')
{	
	switch (s1[c])
	{	
		case 'A':s1[c]=".- ";
		break;
		case 'B':s1[c]="-... ";
		break;
		case 'C':s1[c]="-.-. ";
		break;
		case 'D':s1[c]="-.. ";
		break;
		case 'E':s1[c]=". ";
		break;
		case 'F':s1[c]="..-. ";
		break;
		case 'G':s1[c]="--. ";
		break;
		case 'H':s1[c]=".... ";
		break;
		case 'I':s1[c]=".. ";
		break;
		case 'J':s1[c]=".--- ";
		break;
		case 'K':s1[c]="-.- ";
		break;
		case 'L':s1[c]=".-.. ";
		break;
		case 'M':s1[c]="-- ";
		break;
		case 'N':s1[c]="-. ";
		break;
		case 'O':s1[c]="--- ";
		break;
		case 'P':s1[c]=".--. ";
		break;
		case 'Q':s1[c]="--.- ";
		break;
		case 'R':s1[c]=".-. ";
		break;
		case 'S':s1[c]="... ";
		break;
		case 'T':s1[c]="- ";
		break;
		case 'U':s1[c]="..- ";
		break;
		case 'V':s1[c]="...- ";
		break;
		case 'W':s1[c]=".-- ";
		break;
		case 'X':s1[c]="-..- ";
		break;
		case 'Y':s1[c]="-.-- ";
		break;
		case 'Z':s1[c]="--.. ";
		break;
		case '0':s1[c]="----- ";
		break;
		case '1':s1[c]=".---- ";
		break;
		case '2':s1[c]="..--- ";
		break;
		case '3':s1[c]="...-- ";
		break;
		case '4':s1[c]="....- ";
		break;
		case '5':s1[c]="..... ";
		break;
		case '6':s1[c]="-.... ";
		break;
		case '7':s1[c]="--... ";
		break;
		case '8':s1[c]="---.. ";
		break;
		case '9':s1[c]="----. ";
		break;
		case '.':s1[c]=".-.-.- ";
		break;
		case ',':s1[c]="--..-- ";
		break;
		case ''':s1[c]="..--.. ";
		break;
		case '!':s1[c]=".----. ";
		break;
		case '/':s1[c]="-.-.-- ";
		break;
		case '(':s1[c]="-..-. ";
		break;
		case ')':s1[c]="-.--.- ";
		break;
		case '&':s1[c]=".-... ";
		break;

	}
	c++;
}



*/
	if ((s1[c]!=' ')
	{s1[c]='/';}	

	else
	{int a=0;
	while (s1[c]!=alpha[a])	
	a++;

	s1[c]=morse[a];
	c++;}
}




char* convertToString(char*)

