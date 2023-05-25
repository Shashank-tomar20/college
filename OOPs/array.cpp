#include <iostream>
using namespace std;
int main()
{
    int size ,sum = 0;
    float avg;
    cout << "Enter the no. of elements : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
    for (int i = 0; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is : " << sum << endl;
    avg = (float)sum / size;
    cout << "the average is " << avg << endl;
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "maximum element is " << max << endl;
    int min= arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    cout << " minimum element is " << min <<endl;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "increasing order " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int m,n;
    cout << "Enter n & m:";
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            cin >> A[i][j];
        }
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            cout << A[i][j] <<" ";
        }
        cout <<endl;
    }
    
    return 0;
}