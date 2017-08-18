//program to split the full name stored in one array into first-name, middle-name and last-name.

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){

	char first[MAX],mid[MAX],last[MAX];
	printf("Enter first name: ");
	scanf("%s",first);
	getc(stdin);
	printf("Enter middle name: ");
	scanf("%s",mid);
	getc(stdin);
	printf("Enter last name: ");
	scanf("%s",last);
	getc(stdin);

	int i,j=0;
	int len1=strlen(first),len2=strlen(mid),len3=strlen(last);
	char full_name[MAX*3+2];

	for(i=0;i<len1;i++)
		full_name[j++]=first[i];
	full_name[j++]=' ';
	for(i=0;i<len2;i++)
		full_name[j++]=mid[i];
	full_name[j++]=' ';
    for(i=0;i<len3;i++)
		full_name[j++]=last[i];
	full_name[j]='\0';

	printf("Full name: %s\n",full_name);

	return 0;
}
