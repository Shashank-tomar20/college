#include <iostream>
using namespace std;
int s=1,Full=0,Empty,x=0;
int down(int s){
    return(--s);
}
int up(int s)
{
    return(++s);
}

void producer()
{
    Empty = down(Empty);
    s = down(s);
    x++;
    cout<<endl<<"producer produces the item"<<x<<endl;
    s = up(s);
    Full = up(Full);
}

void consumer()
{
    Full = down(Full);
    s = down(s);
    cout<<endl<<"consumer consumes the item"<<x<<endl;
    x--;
    s = up(s);
    Empty = up(Empty);
}

int main()
{
    int size;
    cout<<"Enter the size of buffer: ";
    cin>>size;
    Empty = size;
    int n;
    void producer();
    void consumer();
    int down(int);
    int up(int);
    cout<<endl<<"1.Producer"<<endl<<"2.Consumer"<<endl<<"3.EXIT"<<endl;
    while(1)
    {
        cout<<endl<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1: if((s==1)&&(Empty!=0)) 
            producer();
            else cout<<"BUffer is full";
            break;

            case 2: if((s==1)&&(Full!=0))
            consumer();
            else cout<<"Buffer is empty";
            break;

            case 3:
            exit(0);
            break;
        }
    }
    return 0;
}