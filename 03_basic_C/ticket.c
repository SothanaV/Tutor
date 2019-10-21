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
    }
    while (sum>0)
    {
        output += sum%10;
        sum /= 10;
        if(sum == 0 && output >= 10)
        {
            int tmp = sum;
            sum = output;
            output = tmp;
        }
    }
    printf("Your number is %d\n",output);
    return 0;
}
