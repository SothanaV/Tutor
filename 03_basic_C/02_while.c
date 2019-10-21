#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    printf("Enter number : ");
    scanf("%d",&input);
    while(input==9)
    {
        printf("9\n");
        break;
    }
    return 0;
}
