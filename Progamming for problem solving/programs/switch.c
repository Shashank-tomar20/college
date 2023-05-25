#include<stdio.h>
int main()
{
    int number =0;
    printf("enter a number: ");
    scanf("%d",&number);
    switch (number)
    {
    case 10:
        printf("number is equal to 10\n");
        break;
    case 20:
        printf("number is equal to 20\n");
        break;
    default:
         printf("number is not equal to 10 and 20\n");
        break;
    }
    return 0;
}
