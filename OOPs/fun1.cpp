#include <iostream>
using namespace std;
int area(int,int);
int main()
{
    int a,b,d;
    cout<<"enter length and breadth:";
    cin >> a >> b;
    d = area(a,b);
    cout << " area :"<<d;
    return 0;
}
int area(int x,int y)
{
    int c;
    c = x * y;
    return c;
}