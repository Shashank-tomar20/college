#include<iostream>

 using namespace std;
 
 //1 2 5 3 6 6 7 9 1 4 3 4 5 2 1
int main()
{
    int a[10],b[10],x[10];
    int waiting[10],turnaround[10],completion[10],p[10];
    int i,j,smallest,count=0,time,n;
    double avg=0,tt=0,end;

   cout<<"\nEnter the number of Processes: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<"Enter arrival time of process "<<i<<":";
      cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"Enter burst time of process "<<i<<":";
      cin>>b[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"Enter priority of process "<<i<<":";
      cin>>p[i];
    }
    for(i=0; i<n; i++)
        x[i]=b[i];

    p[9]=1e9;
    for(time=0; count!=n; time++)
    {
        smallest=9;
        for(i=0; i<n; i++)
        {
            if(a[i]<=time && p[i]<p[smallest] && b[i]>0 )
                smallest=i;
        }
        b[smallest]--;

        if(b[smallest]==0)
        {
            count++;
            end=time+1;
            completion[smallest] = end;
            waiting[smallest] = end - a[smallest] - x[smallest];
            turnaround[smallest] = end - a[smallest];
        }
    }
    cout<<endl;
     cout<<"#P\t"<<"AT\t"<<"BT\t"<<"CT\t"<<"TAT\t"<<"WT\t"<<"P\t"<<endl;
    for(i=0; i<n; i++)
    {
         cout<<"p"<<i+1<<"\t"<<a[i]<<"\t"<<x[i]<<"\t"<<waiting[i]<<"\t"<<turnaround[i]<<"\t"<<completion[i]<<"\t"<<p[i]<<endl;
        avg = avg + waiting[i];
        tt = tt + turnaround[i];
    }
   cout<<"\n\nAverage waiting time ="<<avg/n;
    cout<<"  Average Turnaround time ="<<tt/n<<endl;
}