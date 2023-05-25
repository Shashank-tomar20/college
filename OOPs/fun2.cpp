#include<iostream>
using namespace std;
int multiply(int,int);
int main()
{
    int a,b,d;
    cin >> a >> b;
    d = multiply(a,b);
    cout << " result :"<<d;
    return 0;
}
int multiply(int x,int y)
{
    int c;
    c = x * y;
    return c;
}