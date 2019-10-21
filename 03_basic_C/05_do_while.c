#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    do
    {
        printf("Enter number : ");
        scanf("%d",&input);
        printf("input is : %d \n",input);
    }while(input!= -99);
    return 0;
}
