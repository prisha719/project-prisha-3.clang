
#include<stdio.h>

int main()
{
    int num,digit=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    while(num !=0)
    {
        digit++;
        num /=10;
    }

    printf("your digit are: %d",digit);

    return 0;
}
