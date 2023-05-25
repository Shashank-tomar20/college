#include<stdio.h>
int main()
{
    int n,fact=1;
    //here fact denotes factorial and N denotes number
    printf("Enter the number: ");
    scanf("%d",&n);
    for ( int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d\n",n,fact); 
    return 0;
}
