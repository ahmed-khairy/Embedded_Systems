#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int andMax,orMax,xorMax,temp;
void calculate_the_maximum(int n, int k) {
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			// temp=i & j;
			// if(temp<k)
				// andMax+=1;
			// temp=i | j;
			// if(temp<k)
				// orMax+=1;
			// temp=i ^ j;
			// if(temp<k)
				// xorMax+=1;
			temp=i&j;
			if(temp<k&&temp>andMax)
				andMax+=1;
			temp=i|j;
			if(temp<k&&temp>orMax)
				orMax+=1;
			if(temp<k&&temp>xorMax)
				xorMax+=1;
		}
	}
	printf("%d\n%d\n%d\n",andMax,orMax,xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
