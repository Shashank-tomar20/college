#include <iostream>
using namespace std;
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    cin >> a >> b ;
    c = a + b;
    cout << "result : " << " " << c;
}