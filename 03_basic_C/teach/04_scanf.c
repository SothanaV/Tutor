#include <stdio.h>
int main()
{
    int x; 
    long x1;
    float y;
    double z;
    char c;
    printf("Enter int : ");
    scanf("%d",&x);
    printf("Enter long : ");
    scanf("%ld",&x1);
    printf("Enter float : ");
    scanf("%f",&y);
    printf("Enter double : ");
    scanf("%lf",&z);
    printf("Enter char : ");
    scanf("%c",&c);
    
    printf("%d\n",x);
    printf("%ld\n",x1);
    printf("%f\n",y);
    printf("%f\n",z);
    printf("%c\n",c);
    return 0;
}
