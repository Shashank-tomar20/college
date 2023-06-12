#include<bits/stdc++.h>
#include <iostream>
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

bool comparearrivaltime(process p1, process p2) 
{ 
    return p1.at < p2.at;
}

void completiontime(process *proc,int *ct,int n)
{
    ct[0] = proc[0].bt;
    for(int i=1;i<n;i++)
    {
        ct[i] = proc[i].bt + ct[i-1];
    }
}


void waitingtime(process * proc,int *wt,int *tt,int n)
{
    for(int i=0;i<n;i++)
    {
        wt[i] = tt[i] - proc[i].bt;
    }
}

void turnaroundtime(process *proc,int *tt,int *ct,int n)
{
    for(int i=0;i<n;i++)
    {
        tt[i] = ct[i] - proc[i].at;
    }
}

void avgtime(process *proc,int n)
{
    int wt[n],ct[n],tt[n],total_wt = 0,total_tt=0;
    //sort acc to at
    sort(proc,proc+n,comparearrivaltime);
    
    completiontime(proc,ct,n);
    turnaroundtime(proc,tt,ct,n);
    waitingtime(proc,wt,tt,n);
    
    cout << "Pid"<<"\t "<< "At"<<"\t "<<"Bt"<<"\t "<<"Ct"<<"\t "<<"Wt"<<"\t "<<"Tt"<<endl;
                            
    for(int i=0;i<n;i++)
    {
        total_wt = total_wt + wt[i];
        total_tt = total_tt + tt[i];
    cout<<proc[i].pid <<"\t "<<proc[i].at <<"\t " <<proc[i].bt <<"\t " <<ct[i]<<"\t " << wt[i]<<"\t "<<tt[i]<<endl;
    }
    
    cout<<"avg turn around time = "<<(float)total_tt/(float)n;
    cout<<endl;
    cout<<"avg waiting time = "<<(float)total_wt/(float)n;
}

int main()
{
    process proc[] = {{0,2,6},{1,5,2},{2,1,8},{3,0,3},{4,4,4}};
    int n = sizeof proc / sizeof proc[0];
    avgtime(proc,n);
}.