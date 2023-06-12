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
};
Node*takeInput(){
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
        {head = new Node(n);}
        else
        {
            Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = new Node (n);
        }
        cin >> n;
    }
    return head;
}
void printlinkedlist(Node*head)
{
    Node*temp=head;
    while ( temp!=NULL)
    {
        cout << temp->data << " -> ";
        temp = temp ->next;
    }
    return ;
}
int main()
{
    Node*head = takeInput();
    printlinkedlist(head);
    return 0;
}