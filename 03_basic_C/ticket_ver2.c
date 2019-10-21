#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input,sum=0,output=0;
    printf("Please enter your ticket number <xxxxx> : ");
    scanf("%d",&input);
    while(input>0)
    {
        sum += input%10;
        input /= 10;
        if(input == 0 && sum>=10)
        {
            input = sum;
            sum = 0;
        }
    }
    printf("Your number is %d\n",sum);
    return 0;
}