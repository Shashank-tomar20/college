#include <stdio.h>
int main()
{
    int p,time;
    float rate,interest;
    printf("Enter the value of principle: \n",p);
    scanf("%d",&p);
    printf("Enter the value rate of interest: \n",rate);
    scanf("%f",&rate);
    printf("value of time: \n", time);
    scanf("%d",&time);
    printf("The value of simple interest is : %f\n",interest=p*rate*time/100);
    return 0;
}
