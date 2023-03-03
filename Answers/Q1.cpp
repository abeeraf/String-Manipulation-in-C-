#include<stdlib.h>
#include<stddef.h>
int Strlen ( char* s1 )
{	int c=0;
 	while(s1[c++]!='\0');

	return c;
}

char* Strcpy(char* s1 ,const char* s2 )
{	
	int c=0;
	while (s2[c]!='\0')
	{
		s1[c]=s2[c++];
	}
	return s1;
}

char* Strncpy(char* s1 ,const char* s2, size_t n)
{
	int c=0;
	while (c!=(n-1))
	{
		s1[c]=s2[c++];
	}
	return s1;
}

char* StrCat(char* s1 ,const char* s2 )
{	
	int c=0,a=0;
	while (s1[c++]!='\0');
	while (s2[a++]!='\0')
	{
		s1[++c]=s2[a];
	}
	return s1;
}

char* StrnCat(char* s1 ,const char* s2, size_t n)
{
	int c=0,a=0;
	while (s1[c++]!='\0');
	while (a!=(n-1))
	{
		s1[++c]=s2[a++];
	}
	return s1;
}

int StrCmp( const char* s1 , const char* s2)
{
	int c=0;
	while((s1[c]!='\0')or(s2[c]!='\0')or(s1[c]==s2[c++]));
	
	if (s1[c]==s2[c])
	return 0;

	else if (s2[c]<s1[c])
	return -1;

	else 
	return 1;
}

int StrnCmp( const char* s1 , const char* s2, size_t n)
{
	int c=0;
	while((c!=n-1)or(s1[c]==s2[c++]));
	
	if (s1[c]==s2[c])
	return 0;

	else if (s2[c]<s1[c])
	return -1;

	else 
	return 1;
}

char** StrTok( char* s1 , const char* s2)
{
	int c=0,a=0;
	while(s1[c]!='\0')
	{	
		if (s1[c]==' ')
		{s1[c++]=s2[a++];}
		else 
		c++;
	}
	
}


int StrFind( char* s1 , char* s2)
{	
	//size of s2
	int size=0;
 	while(s2[size]!='\0')
	size++;
	
	int c=0,k=0;
	while((s1[c]!=s2[0])&&(s1[c]!='\0'))
	c++;	

	if (s1[c]==s2[0])
	{	for (int x=0;x<size;x++)
		{
			if (s1[c+x]==s2[x])
			{k++;}
		}
	}

	if (k==size)		
	return c;
	else 
	return -1;
}

char* SubStr (char* s1,int pos,int len)
{
	char* arr=new char[len];
	int c=0;	
	while ((s1[c]!='\0') && (c<len))
	{	arr[c]=s1[c];}
	return arr;
}





