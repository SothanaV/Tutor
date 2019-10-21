#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10,z=3;
    float y = 12.123;
    // printf("x+y  : %f \n",x+y);
    // printf("x-y  : %f \n",x-y);
    // printf("x*y  : %f \n",x*y);
    // printf("x/y  : %f \n",x/y);
    // printf("x%%z  : %d \n",x%z);

    printf("x : %d \n",++x);    //x=11 -> 11
    printf("x : %d \n",x++);    //x=11 -> 11 x=12
    printf("x : %d \n",++x);    //x=13 - >13

    printf("2*3 : %d\n",2*3);
    printf("2*3 : %f\n",2.0*3);
    return 0;
}
