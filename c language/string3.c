#include<stdio.h>
int main()
{
	char str[20];
	printf("enter string: ");
	gets(str);
	//printf("your string is:%s",str);

	int i,k,j;
	for(i=0;str[i] !='\0';i++);
	//printf("\nstring length is: %d",i);
	k = i;
	for(j=0; j<(i/2);j++)
	{
		printf("%c %c ",str[j],str[--k]);
	}
	if(i%2!=0)
	printf("%c ",str[(i/2)]);
	
}
