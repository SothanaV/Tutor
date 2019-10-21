#include <stdio.h>
int main(int argc, char const *argv[])
{
    float x = 10.123;
    int x1 = (float)x;
    char c = 'a'+2;
    char c2 = 'f';

    printf("x : %f x1 : %d\n",x,x1);
    printf("a : %d\n",c);
    
    printf("c2 %c\n",c2+2);
    return 0;
}
