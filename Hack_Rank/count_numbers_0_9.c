#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
	int num[10];

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	char *s=malloc(1024*sizeof(char));
	scanf("%[^\n]", s);
	s = realloc(s, strlen(s) + 1);
	char c=48;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<strlen(s);j++)
		{
			if(c==s[j])
			{
				num[i]+=1;
			}
		}
		c++;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",num[i]);
	}
		
	
    return 0;
}
