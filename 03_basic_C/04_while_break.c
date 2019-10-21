#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    while(1)
    {
        printf("Enter number : ");
        scanf("%d",&input);
        if (input != -99)
        {
            printf("input  is :%d \n",input);
        }
        else
        {
            printf("Invalid input \n");
            break;
        }
    }
    return 0;
}
