#include <stdio.h>
int main(int argc, char const *argv[])
{
    float sum=0,input;
    int count=0;
    while(1)
    {
        printf("%d . Enter weight to find Avg : ",count+1);
        scanf("%f",&input);
        if(input>0)
        {
            sum+=input;
            count++;
        }
        else if(input<0)
        {
            printf("Invalid Input\n");
        }
        else
        {
            printf("Total : %d people\n",count);
            printf("Total weight is : %.2f \n",sum);
            printf("Avg weight : %.2f\n",(float)sum/count);
            break;
        }
    }
    return 0;
}