#include<stdio.h>
#include<string.h>
int main()
{
	char str[30], str1[100];
	int i;
	strcpy(str,"I love it");
	i = 899;
	sprintf(str1,"%6s%05d",str,i);
	printf("%s\n", str1);

	return 0;
}