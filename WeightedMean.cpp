#include<iostream>
#include "iomanip"
using namespace std;
int main()
{
    int N;
    cin>>N;
    int X_values[N];
    int  Y_weigths[N];
    double element_for_y;
    double sum=0.0;
    double sum_weight_mean=0.0;
    for(int i=0;i<N;i++)
    {
        cin>>X_values[i];
        //cin>>element_for_y;
        //sum+=element_for_y;
        //Y_weigths[i]=element_for_y;
    }
    for(int i=0;i<N;i++)
    {
        cin>>element_for_y;
        sum+=element_for_y;
        Y_weigths[i]=element_for_y;
    }
    for(int i=0;i<N;i++)
    {
        sum_weight_mean+=X_values[i]*Y_weigths[i];
    }

    double result=(double)(sum_weight_mean/sum);

    cout<<fixed<<setprecision(1)<<result<<"\n";
    return 0;

}
