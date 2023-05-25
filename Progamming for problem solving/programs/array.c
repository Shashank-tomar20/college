#include<stdio.h>
int main(int argc, char const *argv[])
{
    int values[5];
    printf("Enter 5 integers : \n");
    // taking input and storing it in array
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&values[i]);
    }
    printf("displaying integers: \n" );
    //printing elements of an array
    for ( int i = 0; i < 5; i++)
    {
        printf("%d\n", values[i]);
    }
    
    return 0;
}
