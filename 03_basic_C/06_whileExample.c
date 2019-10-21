#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input,sum=0,count=0;
    while(1)
    {
        printf("Enter number : ");
        scanf("%d",&input);
        if(input != -1)
        {
            sum = sum + input;
            // sum+=input;
            // count = count+1;
            count+=1;
        }
        else
        {
            // int result = sum/count;
            // printf("Avg is : %d\n",result);
            printf("Avg is : %d\n",sum/count);
            break;
        }
    }
    return 0;
}
