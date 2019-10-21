#include <stdio.h>
int main(int argc, char const *argv[])
{
    int intput,age,sum=0,count=0;
    int flag=1;
    while (flag)
    {
        printf("%d. Please input birth year(2500-2562):",count+1);
        scanf("%d",&intput);
        if(intput>=2500 && intput <=2562)
        {
            int age = 2562-intput;
            printf("Your age is %d \n",age);
            sum += age;
            count += 1;
        }
        else if(intput == -99)
        {
            float result = sum/count;
            printf("Average age is %.2f\n",result);
            flag=0;
            // break;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
    return 0;
}