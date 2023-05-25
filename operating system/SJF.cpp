#include <bits/stdc++.h>
using namespace std;
class process
{
     public:
     int pid;  
     int at;   
     int bt;

     process(int pid,int at,int bt)
     {
          this->pid = pid;
          this->at = at;
          this->bt = bt;
     }
};
class SJF
{
     public :
     int Process[100];
     int BT[100];
     int AT[100];
     int CT[100];
     int TT[100];
     int WT[100];
     void process(int n)
     {
     cout << " Enter the process name ";
     for (int i = 0; i < n; i++)
     {
     cin >> Process[i];
     }
     }
     void arrival(int n)
     {    
          cout << "Enter the arrival time ";
          for(int i=0;i<n;i++)
          {
          cin >> AT[i];
          }
     }
     void burst(int n)
     {  
          cout << "Enter the burst time ";
          for(int i=0;i<n;i++)
          {
          cin >> BT[i];
          }
     }
     void completiontime(process *proc,int *ct,int n)
     {
     ct[0] = proc[0].bt;
     for(int i=1;i<n;i++)
     {
          ct[i] = proc[i].bt + ct[i-1];
     }
     }

};
int main()
{
     SJF pro;
     int n;
     cout << "Enter the no. of processes :" << endl;
     cin >> n;
     pro.process(n);
     pro.arrival(n);
     pro.burst(n);
     
     return 0;
}