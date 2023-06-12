#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

Node(int data){
    this->data=data;
    this->next=NULL;
}
};

int main(){
    cout<<" Enter size of linked list:"<<endl;
    int size;
    cin>>size;
    cout<<" Enter the elements to be inserted in the linked list"<<endl;
    int x;
    cin >> x;
   Node* head=new Node(x);
   Node* temp=head; 
   x--;
   
    while(x--){
        int y;cin>>y;
    Node* node1= new Node(y);
temp->next=node1;
temp=node1;
    temp->next=NULL;
    };

Node* temp1=head;
    cout<<"Elements present in the linked list are:";
while(temp1!=NULL){
    cout<<temp1->data<<" ";
    temp1=temp1->next;
}

Node* abc=head;
int odd=0,even=0;
while ( abc!=NULL ){
if(abc->data % 2 == 0) {
    even++;
}
else{
    odd++;
}
    abc=abc->next;
}
cout<<endl;
cout<<"odd elements present in list are :"<<odd<<endl;
cout<<"even elements present in list are :"<<even<<endl;
}