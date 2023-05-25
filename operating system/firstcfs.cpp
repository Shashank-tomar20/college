#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of processes"<<endl;
    cin>>n;
    int att[n];
    int btt[n];
    int process[n];
    cout<<"enter the processes"<<endl;
    for(int i=0;i<n;i++)
{
    cin>>process[i];
}
    cout<<"enter the arrival time"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>att[i];
    }
    cout<<"enter the burst time "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>btt[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(att[i]<att[j])
            {
                swap(att[i],att[j]);
                swap(btt[i],btt[j]);
                swap(process[i],process[j]);
            }
        }
    }


    int sum=att[0]+btt[0];

    for(int i=1;i<n;i++)
    {
        if(i>1)
        {
            sum+=btt[i-1];
        }


        for(int j=i;j<n;j++)
        {
            int mini=btt[i];
            //code for minimum if two cases arise with btt[j]<mini condition

            for(int k=j;k<n;k++)
            {
                if(btt[k]<mini)
                {
                    mini=btt[k];
                swap(att[i],att[k]);
                swap(btt[i],btt[k]);
                swap(process[i],process[k]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<process[i]<< "    "<<att[i]<< "   "<<btt[i]<<endl;
    }

    int ctt[n];
    int tat[n];
    int wtt[n];
    ctt[0]=btt[0]+att[0];
    tat[0]=ctt[0]-att[0];
    wtt[0]=tat[0]-btt[0];
    for(int i=1;i<n;i++)
    {
        int sum=0;
        if(att[i]<=ctt[i-1])
        {
            sum=ctt[i-1]+btt[i];
        }else{
            sum=att[i]+btt[i];
        }
        ctt[i]=sum;
        tat[i]=ctt[i]-att[i];
        wtt[i]=tat[i]-btt[i];
    }
    cout<<"process   at   bt   ct   tat   wt"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<process[i]<<"          "<<att[i]<<"   "<<btt[i]<<"    "<<ctt[i]<<"     "<<tat[i]<<"     "<<wtt[i]<<endl;
}
}