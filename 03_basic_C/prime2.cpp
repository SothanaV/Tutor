#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int input,is_prime=0;
    vector <int> vec;
    while(1)
    {
        printf("Please input number(3 - 50,000) : ");
        scanf("%d",&input);
        // int arr[input];
        for(int i=2;i<=input;i++)
        {
            is_prime = 0;
            for (int j = 2; j <= i; j++)
            {
                if(i == j)
                {
                    is_prime = 1;
                }
                else if(i%j==0)
                {
                    is_prime=0;
                    break;
                }
            }
            if(is_prime==0)
            {
                // printf("%d is prime number\n",input);
                vec.push_back(i);
            }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << endl;
        }
        
    }
    return 0;
}
