#include <iostream>
using namespace std;
class base //single base class
{
 	public:
 	int x;
 	void getdata()
 	{
    	cout << "Enter value of x : ";
        cin >> x;
 	}
};
class A : public base // derived class from base class
{
 	public:
 	int y;
 	void readdata()
 	{
 	    cout << "\n Enter value of y : "; 
        cin >> y;
 	}
};
class B : public A   // derived from class A
{
 	private:
 	int z;
 	public:
 	void takedata()
 	{
    	cout << "\n Enter value of z : "; 
        cin >> z;
 	}
 	void product()
 	{
 	    cout << "\n product is : " << x * y * z << endl;
 	}
};
int main()
{
     B a;     
      //object of derived class
     a.getdata();
     a.readdata();
     a.takedata();
     a.product();
     return 0;
}             