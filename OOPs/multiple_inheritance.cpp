#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"enter 1st number:";
        cin>>a;
    }
};
class B {
    protected:
    int b;
    public:
    void getdata(){
        cout<<"enter 2nd number:";
        cin>>b;
    }
};
class C :public A,public B{
    protected:
    int c;
    public:
    void inputdata(){
        cout<<"enter the 3rd number:";
        cin>>c;}
    void putData(){
        cout<<" sum of numbers is : " << a+b+c;
    }
    
};
int main(){
    C obj;
    obj.input();
    obj.getdata();
    obj.inputdata();
    obj.putData();
    return 0;
}            
