#include "libhello.h"
#include <stdio.h>
#include <string.h>

void main()
{
    GoString str;
    char x[100];

    str = Hello();
    strncpy(x,str.p,str.n);

    printf("%s\n",x);
    printf("%d\n",str.p[5]);

    Test();
}
