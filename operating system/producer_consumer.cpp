#include<bits/stdc++.h>
using namespace std;
int mutex=1,full=0,Buffer=5,x=0;
// s is semaphore
int wait(int s){
     return(--s);
}

int signal (int s){
     return(++s);
}

void producer(){
     Buffer=wait(Buffer);
     mutex =wait(mutex);
     x++;
     cout<<endl<<"producer produced an item "<<"  "<<x<<endl;
     mutex=signal(mutex);
     full=signal(full);
}
void consumer(){
     full=wait(full);
     mutex=wait(mutex);
     cout<<endl<<"consumer consumed an item "<<"  "<<x<<endl;
     x--;
     mutex=signal(mutex);
     Buffer=signal(Buffer);
} 
int main(){
     int n;
     void producer();
     void consumer();
     int wait(int);
     int signal(int);
     cout<<endl<<"1.producer"<<endl<<"2.consumer"<<endl<<"3.exit"<<endl;while(1){
     cout<<endl<<"enter your choice:";
     cin>>n;
     switch(n){
     case 1:if((mutex==1)&&(Buffer!=0))
     producer();
     else cout<<"buffer is full!!";
     break;
     case 2: if((mutex==1)&&(full!=0))
     consumer();
     else cout<<"buffer is empty!!";
     break;
     case 3:
     exit(0);
     break;
     }
     }
     return 0;

} 