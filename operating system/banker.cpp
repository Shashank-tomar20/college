#include <iostream>
using namespace std;
int main()
{
int p, r, i, j, k;

cout<<"Enter no. of processes\n";
cin>>p;

cout<<"Enter number of resource instances\n";
cin>>r;
int alloc[p][r];
for (int i = 0; i < p; i++)
{    cout<<"Enter allocated resources for Process "<<i<<endl;
     for (int j = 0; j < r; j++)
     { cin>>alloc[i][j];
     }
}

int max[p][r];
for (int i = 0; i < p; i++)
{    cout<<"Enter Max resources Required for Process "<<i<<endl;
     for (int j = 0; j < r; j++)
     { cin>>max[i][j];
     }
     
}
int avail[r];
for (int i = 0; i < r; i++)
{    cout<<"Enter availabe resource instances\n";
     cin>>avail[i];
}

int f[p], ans[p], ind = 0;
for (k = 0; k < p; k++) {
	f[k] = 0;
}
int need[p][r];
for (i = 0; i < p; i++) {
	for (j = 0; j < r; j++)
	need[i][j] = max[i][j] - alloc[i][j];
}
int y = 0;
for (k = 0; k < 5; k++) {
	for (i = 0; i < p; i++) {
	if (f[i] == 0) {

		int flag = 0;
		for (j = 0; j < r; j++) {
		if (need[i][j] > avail[j]){
			flag = 1;
			break;
		}
		}

		if (flag == 0) {
		ans[ind++] = i;
		for (y = 0; y < r; y++)
			avail[y] += alloc[i][y];
		f[i] = 1;
		}
	}
	}
}

int flag = 1;

for(int i = 0;i<p;i++)
{
		if(f[i]==0)
	{
		flag = 0;
		cout << "The given sequence is not safe";
		break;
	}
}

if(flag==1)
{
	cout << "Following is the SAFE Sequence" << endl;
	for (i = 0; i < p - 1; i++)
		cout << " P" << ans[i] << " ->";
	cout << " P" << ans[p - 1] <<endl;
}

	return 0;
}