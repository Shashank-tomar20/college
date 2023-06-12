#include <iostream>
using namespace std;
class QUEUE {
public:
int queue[100], n = 100, front = - 1, rear = - 1;
void Enqueue(int element) {
   
   if (isfull())
   cout<<"Queue is full "<<endl;
   else {
      if (front == - 1)
      front = 0;
      rear++;
      queue[rear] = element;
   }
}
bool isfull(){
         if(rear>=99)
         {return true;}
         else 
      return false;
   }
bool isempty()
{
   if(front<=-1)
   return true;
   else 
   return false ;
}
void Dequeue() {
   if (front == - 1 || front > rear) {
      cout<<" Queue is empty ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
};
int main (){
   QUEUE q;
   int option, value;
   cout<<"1) Enqueue "<<endl;
   cout<<"2) Dequeue "<<endl;
   cout<<"3) Display Queue "<<endl;
   cout<<"4) Exit "<<endl;

   do {
      cout << "Enter choice: "<<endl;
      cin>> option;
      switch(option) {
         case 1: {
            cout<<"Enter value to enqueue : "<<endl;
            cin>>value;
            q.Enqueue(value);
            break;
         }
         case 2: {
            q.Dequeue();
            break;
         }
         case 3: {
            q.Display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Enter the correct option :"<<endl;
         }
      }
   }while(option!=4);
   return 0;
}