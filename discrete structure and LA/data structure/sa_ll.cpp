#include<iostream>

using namespace std;

class Node{
    public:
    int value;
    Node *next;

    Node(){
        value=0;
        next=NULL;
    }

    Node(int data){
        this->value = data;
        next=NULL;
    }
};

class Linkedlist{
    public:
    Node *head;

    Linkedlist(){
        head=NULL;
    }

    bool isEmpty(){
       if(head==NULL)
       return true;
    }

    void InsAtEnd(int d){
        Node *ptr=head;
        Node *temp= new Node(d);
        if(head==NULL){
            head=temp;
            cout<<"Node head created\n";
        }else{
            while(ptr->next!=NULL){
            ptr=ptr->next;
        }
            ptr->next=temp;

            cout<<"Node inserted at end\n";
        }
    }

    void InsAtBeg(int d){
        Node *temp=new Node(d);
        if(head==NULL){
            head=temp;
            cout<<"Node head is created\n";
        }else{
            temp->next=head;
            head=temp;
        }
    }

    void InsAtPt(int d,int k){
        Node* temp=new Node(d);
        Node* ptr=head;
        int count=1;
        while(count!=k-1){
            if(ptr==NULL){
                cout<<" length is not correct\n";
                break;
            }else{
                ptr=ptr->next;
            }
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }

    void InsAtVal(int d,int k){
        Node* temp=new Node(d);
        Node* ptr=head;
        while(ptr->value!=k&&ptr!=NULL){
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }

   void Disp(){
    Node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->value<<"->";
        ptr=ptr->next;
        
    }
   }
};

int main()
{   cout<<"Menu: \n0-)exit\n1-)Insert at beginning\n2-)Insert at end\n3-)Insert at a Position\n4-)Insert after a value\n5-)Display list\n";
    Linkedlist list;
    int n;
    int x;
    do{
        cout<<"Enter the choice from menu.\n";
        cin>>n;

      switch (n)
      {
        case 0:
        break; 

        case 1:
        cout<<" Enter the value to insert at beginning\n";
        cin>>x;
        list.InsAtBeg(x);
        break;

        case 2:
        cout<<"Enetr the value to insert at end\n";
        cin>>x;
        list.InsAtEnd(x);
        break;

        case 3:
        cout<<"Enter the value to insert\n";
        cin>>x;
        int t;
        cout<<"Enter a position\n";
        cin>>t;
        list.InsAtPt(x,t);
        break;
        
        case 4:
        cout<<"Enter a number to insert\n";
        cin>>x;
        int z;
        cout<<"Enter a number to be searched\n";
        cin>>z;
        list.InsAtVal(x,z);
        break;

        case 5:
        list.Disp();

      default:
        break;
      }  
    }while(n!=0);
    return 0;
}