#include<bits/stdc++.h>
using namespace std;
struct process {
    int pid;
    int at;
    int bt;
    int st;
    int ct;
    int tat;
    int wt;
  //  int response_time;
};

int main() {

    int n;
    struct process p[100];
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
   // float cpu_utilisation;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    //int total_idle_time = 0;
   // float throughput;
    int is_completed[100];
    memset(is_completed,0,sizeof(is_completed));

    //cout << setprecision(2) << fixed;

    cout<<"Enter the number of processes: ";
    cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Enter arrival time of process "<<i+1<<": ";
        cin>>p[i].at;
        cout<<"Enter burst time of process "<<i+1<<": ";
        cin>>p[i].bt;
        p[i].pid = i+1;
        cout<<endl;
    }

    int current_time = 0;
    int completed = 0;
    int prev = 0;

    while(completed != n) {
        int idx = -1;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(p[i].at <= current_time && is_completed[i] == 0) {
                if(p[i].bt < mn) {
                    mn = p[i].bt;
                    idx = i;
                }
                if(p[i].bt == mn) {
                    if(p[i].at < p[idx].at) {
                        mn = p[i].bt;
                        idx = i;
                    }
                }
            }
        }
        if(idx != -1) {
            p[idx].st = current_time;
            p[idx].ct = p[idx].st + p[idx].bt;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
           // p[idx].response_time = p[idx].st - p[idx].at;
            
            total_turnaround_time += p[idx].tat;
            total_waiting_time += p[idx].wt;
          //  total_response_time += p[idx].response_time;
           // total_idle_time += p[idx].st - prev;

            is_completed[idx] = 1;
            completed++;
            current_time = p[idx].ct;
            prev = current_time;
        }
        else {
            current_time++;
        }
        
    }

    int min_arrival_time = 10000000;
    int max_completion_time = -1;
    for(int i = 0; i < n; i++) {
        min_arrival_time = min(min_arrival_time,p[i].at);
        max_completion_time = max(max_completion_time,p[i].ct);
    }

    avg_turnaround_time = (float) total_turnaround_time / n;
    avg_waiting_time = (float) total_waiting_time / n;
    avg_response_time = (float) total_response_time / n;
    //cpu_utilisation = ((max_completion_time - total_idle_time) / (float) max_completion_time )*100;
    //throughput = float(n) / (max_completion_time - min_arrival_time);

    cout<<endl<<endl;

    cout<<"#P\t"<<"AT\t"<<"BT\t"<<"CT\t"<<"TAT\t"<<"WT\t"<<"\n"<<endl;

    for(int i = 0; i < n; i++) {
        cout<<p[i].pid<<"\t"<<p[i].at<<"\t"<<p[i].bt<<"\t"<<p[i].ct<<"\t"<<p[i].tat<<"\t"<<p[i].wt<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time = "<<avg_turnaround_time<<endl;
    cout<<"Average Waiting Time = "<<avg_waiting_time<<endl;
    //cout<<"Average Response Time = "<<avg_response_time<<endl;
   // cout<<"CPU Utilization = "<<cpu_utilisation<<"%"<<endl;
  //  cout<<"Throughput = "<<throughput<<" process/unit time"<<endl;
    return 0;

}