#include <iostream>
using namespace std;
int areaofcircle(int);
int main()
{
    int a,d;
    cout<<"enter the value of radius : ";
    cin >> a;
    d = areaofcircle(a);
    cout << "the area of circle is : "<<d <<endl;
    float f,e;
    cout << " enter the radius: ";
    cin >> f;
    e = areaofcircle(f);
    cout << " the area in float will be " << e; 

    return 0;
}
int areaofcircle(int r)
{
    int area;
    float pie=3.14;
    area = pie*r*r;
    return area;
}
float areaofcircle(float t)
{
    float area;
    float pie;
    area = pie*t*t;
    return area;
}