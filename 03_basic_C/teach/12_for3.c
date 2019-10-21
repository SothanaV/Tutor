#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d\n",i);
        if(i==5)
        {
            break;
        }
        
    }
    return 0;
}
