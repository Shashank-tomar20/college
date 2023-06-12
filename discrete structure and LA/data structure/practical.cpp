#include <iostream>
using namespace std;
class node
{
     public:
     int data;
     node*next;
     node()
     {
          node*
     }
     node(int data)
     {
          this->data=data;
          next=NULL;
     }
};
class linkedlist
{
     public:
     int n;
     node*head = NULL;
     void Insert (int x)
     {    for (int i = 0; i < n; i++)
     {
          node* newnode = new node(x);
          if(head==NULL)
          {
               head = new node(x);
          }
          else
          node*ptr=head;
          while(ptr->next!=NULL)
          {
             ptr=ptr->next;
          }
          ptr->next = NULL;
     }   
};