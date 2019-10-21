#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input,is_prime=0;
    while(1)
    {
        printf("Please input number(3 - 50,000) : ");
        scanf("%d",&input);
        if(input>=3 && input<=50000)
        {
            for(int i=2;i<=input;i++)
            {
                if(input == i)
                {
                    is_prime = 1;
                }
                else if(input%i==0)
                {
                    is_prime=0;
                    break;
                }
            }
            if(is_prime==1)
            {
                printf("%d is prime number\n",input);
            }
            else
            {
                printf("%d is not prime number\n",input);
            }
            
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
    return 0;
}
