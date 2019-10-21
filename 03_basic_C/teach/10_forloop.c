#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,input;
    for(int i=0;i<5;i++)
    {
        printf("Enter for sum :");
        scanf("%d",&input);
        sum+=input;
        printf("sum : %d\n",sum);
    }
    return 0;
}
