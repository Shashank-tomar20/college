#include<stdio.h>
//to find the area of the circle and volume of cylinder
int main()
{
    int r,h;
    float area,pie=3.141,vol;
    printf("Enter the value of radius: \n",r);
    scanf("%d",&r);
    printf("The area of circle is %f\n",area=pie*r*r);
    // volume of cylinder
    printf("Enter the value of height: \n",h);
    scanf("%d",&h);
    printf("THe volume of cylinder is %f \n",vol=pie*r*r*h);
    return 0;
}
