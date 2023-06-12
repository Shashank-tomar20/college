#include <iostream>
using namespace std;
class Node {
    public :
    int data;
    Node*next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }

void insert1(int value)
{
     if (head==NULL)
     {
     head = new Node(value);
     }
     else
     {
          Node* temp=head;
          temp ->next = head;
          head = temp;
     } 
}
void insert2(int value)
{
     if (head == NULL)
        {head = new Node(value);}
        else
        {
            Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = new Node (value);
        }
}
void insert3(int value,int pos)
{
     int count = 1;
     if (head==NULL)
     {
          head = new Node(value);
     }
     else 
     {   Node *temp=head;
          while (count != pos)
          {
               temp=temp->next;
               count++;
          }
          temp->next = new Node(value);
     }
}
void insert4(int data,int value)
{
     int count = 1;
     if (head==NULL)
     {
          head = new Node(value);
     }
     else 
     {   Node *temp=head;
         
     }
}
}*head;
Node*takeInput(){
     int count=0;
    int x;
    cout<<"Enter the no. of nodes in linked list: ";
    cin >> x;
    int n;
    cout<< " Enter the elements: ";
    cin >> n;
    Node*head=NULL;
    while (x--)
    {
        if (head == NULL)
        {head = new Node(n);
        count++;}
        else
        {
            Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = new Node (n);
            count ++;
        }
        cin >> n;
    }
    return head;
}