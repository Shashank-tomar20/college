#include<iostream>
using namespace std;
//Traversal, Insertion & Deletion at and from a given location
class arrays
{ public:
int size=1000;
int a[1000];
int n;
void traverse()
{
     for (int  i = 0; i < n ; i++)
     {
          cout << a[i] << " ";
     }
}

void insert_begin(int data)
{for (int i = n; i >= 0; i--)
{
     a[i]=a[i-1];
}
a[0]=data;
n=n+1;
}

void insert_end(int data)
{
a[n]=data;
n=n+1;
}

void insert_pos(int pos,int data)
{
     for (int i = n; i >=pos; i--)
     {
     a[i]= a[i-1];
     }
     a[pos]=data;
     n=n+1;
}

void delete_begin()
{
     for (int i = 1; i < n; i++)
     {
          a[i-1]=a[i];
     }
}

void delete_end()
{
     
     delete &a[n];
     n=n-1;
}

void delete_pos(int pos)
{
     for (int i = pos; i < n ; i++)
     {
          a[i-1]=a[i];
     }
     n=n-1;
}
};

int main()
{    cout << "enter size of array";
     arrays A;
     cin >> A.n;
     cout << " enter elements : ";
     for (int i = 0; i < A.n; i++)
     {
         cin >> A.a[i];
     }
     int option ,value;
   cout<<"1) Insert at beginning "<<endl;
   cout<<"2) insert at end"<<endl;
   cout<<"3) Inseert at position pos"<<endl;
   cout<<"4) EXIT"<<endl;
   cout<<"5) Traverse " << endl;
   cout<<"6) Delete from beginning"<<endl;
   cout<<"7) Delete from end"<<endl;
   cout<<"8) Delete from given position"<<endl; 
   do {
      cout << "Enter choice: "<<endl;
      cin>> option;
      switch(option) {
         case 1: {
            cout<<"Enter value to be inserted"<<endl;
            cin>>value;
            A.insert_begin(value);
            break;
         }
         case 2: {
          cout<<"Enter value to be inserted"<<endl;
            cin>>value;
            A.insert_end(value);
            break;
         }
         case 3: {
          cout<< " Enter value to be inserted"<<endl;
          cin >> value;
          int index;
          cout<< " Enter position at which element to be inserted"<<endl;
          cin >> index;
          A.insert_pos(index,value);
          break;
         }
         default: {
            cout<<"Enter the correct value:"<<endl;
         }
         case 4:
         {
          cout << "Exited";
         }
         case 5 : 
         {
          A.traverse();
         }
         case 6 :
         {
          A.delete_begin();
         }
         case 7:
         {
          A.delete_end();
         }
         case 8:
         {
          int pos;
          cout<< "Enter the position from which you want to delete";
          cin>>pos;
          A.delete_pos(pos);
         }
      }
   }while(option!=4);
     return 0;
}
    
