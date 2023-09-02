#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char signedCharVar;
    unsigned char unsignedCharVar;
    short signed int shortSignedIntVar;
    short unsigned int shortUnsignedIntVar;
    long signed int longSignedIntVar;
    long unsigned int longUnsignedIntVar;
    float floatVar;
    double doubleVar;
    long double longDoubleVar;

    printf("signedCharVar size is %d\n",sizeof(signedCharVar));
    printf("unsignedCharVar size is %d\n",sizeof(unsignedCharVar));
    printf("shortSignedIntVar size is %d\n",sizeof(shortSignedIntVar));
    printf("shortUnsignedIntVar size is %d\n",sizeof(shortUnsignedIntVar));
    printf("longSignedIntVar size is %d\n",sizeof(longSignedIntVar));
    printf("longUnsignedIntVar size is %d\n",sizeof(longUnsignedIntVar));
    printf("floatVar size is %d\n",sizeof(floatVar));
    printf("doubleVar size is %d\n",sizeof(doubleVar));
    printf("longDoubleVar size is %d\n",sizeof(longDoubleVar));

    return 0;
}
