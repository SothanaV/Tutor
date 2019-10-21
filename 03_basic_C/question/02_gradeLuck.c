#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    int grade=0,count=0;
    while(1)
    {
        printf("Please Enter You Grade : ");
        scanf(" %c",&input);
        if(input=='-')
        {
            printf("Avg Grade is : %.3f\n",(float)grade/count);
            break;
        }
        switch (input)
        {
            case 'A':
                grade+=4;
                count++;
                break;
            case 'B':
                grade+=3;
                count++;
                break;
            case 'C':
                grade+=2;
                count++;
                break;
            case 'D':
                grade+=1;
                count++;
                break;
            case 'F':
                grade+=0;
                count++;
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }
    return 0;
}
