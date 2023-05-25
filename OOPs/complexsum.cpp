#include <iostream>
using namespace std;
struct complex
{
    float real ;
    float imaginary ; 
};
int main ()
{
    complex n1,n2,sum;
    cout << " enter the first no. : ";
    cin >> n1.real >> n1.imaginary ;
    cout << " enter the second no. : ";
    cin >> n2.real >> n2.imaginary ;
    sum.real =(n1.real+n2.real);
    sum.imaginary = (n1.imaginary+n2.imaginary);
    if (sum.imaginary<=0)
    {
        cout << sum.real << "-" << sum.imaginary <<  "i" ;
    }
    else
    {
        cout << sum.real << "+" << sum.imaginary <<  "i" ;
    }
    return 0;
}
