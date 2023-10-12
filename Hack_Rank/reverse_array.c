#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,x;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int newarr[num];


    /* Write the logic to reverse the array. */
    for (i = 0; i < num; i++) {
        x = arr[i];
        newarr[num - i - 1] = x;
    }
    for (i = 0; i < num; i++) {
        arr[i] = newarr[i];
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}