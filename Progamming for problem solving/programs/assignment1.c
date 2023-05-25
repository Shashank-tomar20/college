/*PURPOSE: pfps assignment-2
Dated: 7th january 2022*/
#include<stdio.h>
int main()
{
    float i,pro=1,g=0,sum=0;
    for ( i = 1; i <= 7; i++)
    {
        pro=i*pro;
        g=i/pro;
        sum = sum + g;
        printf("%f \n",sum);
    }
    printf("%f is the required sum\n",sum);
    return 0;
}
