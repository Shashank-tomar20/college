#include <iostream>
using namespace std;
// base class
class Add
{
    public:
    int num1, num2;
    int addition(int num1, int num2)
    {
        return num1 + num2;
    }
};
// base class
class Prdt
{
    public:
    int a, b;
    int product(int a, int b)
    {
        return a * b;
    }
};
// first sub class
class Average : public Add
{
    public:
    int c, d;
    void avg()
    {
        cout << "\nAverage of the 2 numbers = " << (float)Add::addition(c, d) / 2;
    }
};
// second sub class
class Print : public Add, public Prdt
{
    public:
    int e, f;
    void print()
    {
        cout << "Sum of the 2 numbers = " << Add::addition(e, f);
        cout << "\nProduct of the 2 numbers = " << Prdt::product(e, f);
    }
};
// main function
int main()
{
    Print obj1;
    Average obj2;
    cout << "Enter 2 numbers: ";
    cin >> obj1.e >> obj1.f;
    obj1.print();
    obj2.c = obj1.e;
    obj2.d = obj1.f;
    obj2.avg();
    return 0;
}
