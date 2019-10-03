#include<iostream>
#include<algorithm>
using namespace std;
int finding_median(int arr[],int size)
{
    int median;
     if(!(n & 1))
    {
        int median=(arr[n/2-1]+arr[n/2])/2;   
    }
    else
    {
        int median=(arr[n/2]);
    }
    return median;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
        int Q1=finding_median(arr,n);
        int Q2,Q3;
        if(!(n & 1))
        {
            Q2=finding_median(arr,n/2);
            Q3=finding_median(arr+n/2,n/2);
        }

        else
        {
            Q2=finding_median(arr,n/2);
            Q3=finding_median(arr+n/2+1,n/2);
        }

    cout<<Q1<<"\n";
    cout<<Q2<<"\n";
    cout<<Q3<<"\n";
return 0;
}
