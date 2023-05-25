#include<stdio.h>
int main()
{
    int n,i,sum;
    i=1,sum=0;
    printf("Enter the no. upto which sum of square you want:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
        printf("sum is %d \n", sum);
    }
    printf("Sum of squares of numbers from 1 to n is :%d \n",sum);
    return 0;
}