#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10;
    printf("x : %05d\n",x);

    float f = 12.3456789123;
    printf("f : %.2f\n",f);
    printf("f : %5.2f\n",f);
    printf("f : %08.2f\n",f);
    printf("f : %10.3f\n",f);

    int x2 = 10;
    printf("x2 : %-5d f : %f\n",x2,f);
    return 0;
}
