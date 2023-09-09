#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("%d\n",x);
    while(x<4)
    {
        x++;
        if(x==2)
            continue;
        printf("%d\n",x);

    }
    return 0;
}
