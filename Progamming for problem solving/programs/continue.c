#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1;
    for ( i = 1; i <= 10; i++)
    {if (i==5)
    {
        continue;
    }
    
        printf("%d\n",i);
    }
    
    return 0;
}
