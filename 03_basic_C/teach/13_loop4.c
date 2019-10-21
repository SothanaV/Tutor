#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
       {
           printf("%d %d \n",i,j);
           if(j==2)
           {
               break;
           }
       }
    }
    return 0;
}
