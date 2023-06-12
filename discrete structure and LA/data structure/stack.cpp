#include <bits/stdc++.h>
using namespace std;
class Stack
{
     public:
     int arr[100];
     int top = -1;
     int push(int ele)
     {   
         if( isfull())
         {
          cout <<"stack overflow "<<endl; 
         }
         else{
         top ++;
          arr[top]=ele;
         }
     }
     void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<arr[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty" << endl;
}
     bool isfull(){
          if(top>=99)
          {return true;}
          else 
          return false;
     }
     void pop()
     {  if (isempty())
     {
          cout << " stack underflow" << endl;
     }
     else{
     cout << " popped element is : " << arr[top] << endl;
     top --;
     }
     
     }
     bool isempty()
     { if(top<=-1)
     return true;
     else 
     return false ;        
     }
     void peek(){
          cout << "the top most element is :"<< arr[top]<< endl;
     }
};

int main (){
    Stack s;
    int option, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   cout<<"5) Peek"<<endl;
   do {
      cout << "Enter choice: "<<endl;
      cin>> option;
      switch(option) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
         }
         case 2: {
            s.pop();
            break;
         }
         case 3: {
            s.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         case 5:{
          s.peek();
          break;
         }

         default: {
            cout<<"Enter the correct value:"<<endl;
         }
      }
   }while(option!=4);
     return 0;
}
