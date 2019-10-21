#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input,sum=0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d Please enter num for avg : ",i);
        scanf("%d",&input);
        if(input== -99)
        {
            printf("Invalid input \n");
            break;
        }
        sum += input;
    }
    printf("Avg is : %d\n",sum/10);
    
    return 0;
}
