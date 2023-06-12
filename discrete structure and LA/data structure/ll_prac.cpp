#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
// constructor created
Node(int data){
    this->data=data;
    this->next=NULL;
}
};

int main()
{   //take input from user 
    cout<<"Enter size of linked list:"<<endl;
    int size;
    cin>>size;
    //take input from user
    cout<<"Elements to be inserted in the linked list"<<endl;
    int x;
    cin>>x;

   Node* head=new Node(x);
   Node* temp=head;
   size--;
   // used to enter elements in linked list
    while(size--){
        int y;
        cin>>y;
    Node* node1= new Node(y);
    temp->next=node1;
    temp=node1;
    temp->next=NULL;
    }

// used to display the elements
Node* ptr1=head;
    cout<<"Elements present in the linked list are:";
while(ptr1!=NULL){
    cout<<ptr1->data<<" ";
    ptr1=ptr1->next;
}

// used to find whether the elements are even or odd
Node* ptr2=head;int odd=0,even=0;
while(ptr2!=NULL){
if( ptr2->data % 2 == 0) {
    even++;
}
else{
    odd++;
}
    ptr2=ptr2->next;
}

cout<<endl;
cout<<"Odd elements in list are :"<<odd<<endl;
cout<<"Even elements in list are :"<<even<<endl;

return 0;

}