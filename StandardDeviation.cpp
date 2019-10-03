//What is the Standard Deviation is the average distance to the mean.
//sort of like just simply get this point.
//Average squared distance to the mean is called the variance.
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin>>N;
    int arr_new[N];
    int element;
    double sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>element;
        sum+=element;
        arr_new[i]=element;
    }
    double mean=(double)(sum/N);
    sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=pow((arr_new[i]-mean),2);
    }
    double standard_deviation=(double)(sum/N);
    cout<<fixed<<setprecision(1)<<standard_deviation<<"\n";
    return 0;
}