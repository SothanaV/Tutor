#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    while(1)
    {
        i++;
        if(i==5)
        {
            continue;
        }
        printf("I : %d\n",i);
        if(i>10)
        {
            break;
        }
    }   
    return 0;
}