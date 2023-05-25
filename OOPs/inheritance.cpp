#include <bits/stdc++.h>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout << " Enter a number : ";
        cin >> a;
    }
};
class B : public A
{
   int b;
   public :
   void getdata()
   {
       cout << " Enter a number : ";
       cin >> b;
   }
   void putdata()
   {
       cout <<" result is : "<< a + b << endl;
   }
};
int main()
{
    B obj;
    obj.input();
    obj.getdata();
    obj.putdata();
    return 0;
}
