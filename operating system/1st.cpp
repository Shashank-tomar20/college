#include <bits/stdc++.h>
#include <string>
#include<iostream>
using namespace std;
class FCFS
{    public:
     string P;
     int AT[100]; 
     int BT[100];
     int CT[100];
     int TT[100];
     int WT[100];
     char arr[100];
     void process(int n)
     {
     cout << " Enter the process name ";
     for (int i = 0; i < n; i++)
     {
     cin >> arr[i];
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
     void Completion_time(int *BT,int n)
     {
     CT[0]=BT[0];
     for(int i=1;i<n;i++)
     {
     CT[i]= BT[i] + CT[i-1];
     }
     cout << " completion time is " << endl;
     for(int i=0;i<n;i++)
     {
          cout << BT[i] << endl;
     }
     }
void findWaitingTime(int *TT,int *BT,int n)
{     
     for (int i = 0; i < n; i++)
     {
          WT[i] = TT[i]-BT[i]; 
     }
     for (int i = 0; i < n; i++)
     {
          cout << WT[i] << endl;
     }
}

// Function to calculate turn around time
void findTurnAroundTime( int n,int *CT,int *AT,int i)
{    
     for(int i=0;i<n;i++)
     {
          TT[i]=CT[i]-AT[i];
     }
     for(int i=0;i<n;i++)
     {
          cout << TT[i] << endl;
     }
}

};
int main()
{    
     FCFS task;
     int n ;
     cout << "enter the no. of processes : ";
     cin >> n;
     task.process(n);
     task.arrival(n);
     task.burst(n);
     cout << "Process" << "\t"<< "Arrival" <<"\t"<< "Burst" << "\t"<< "Completion"<<"\t"<< "Turn" <<"\t"<< "Waiting"<<endl;
     for (int i = 0; i < n; i++)
     {
          cout << task.arr[i] << "\t"<<task.AT[i]<<"\t"<<task.BT[i]<<"\t"<<task.CT[i]<<"\t"<<task.TT[i]<<"\t"<<task.WT[i]<<endl;
     }
     return 0;
}
