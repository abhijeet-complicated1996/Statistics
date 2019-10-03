#include<iostream>
#include<cmath>
using namespace std;
double pearson_coeff(int n, double*a,double*b) {
    double mean_a = 0;
    double mean_b = 0;

    for(int i=0;i<n;i++) {
        mean_a+=a[i];
        mean_b+=b[i];
    }

    mean_a/=n;
    mean_b/=n;


    double variance_a = 0;
    double variance_b = 0;

    for(int i=0;i<n;i++) {
        variance_a+=(a[i]-mean_a)*(a[i]-mean_a);
        variance_b+=(b[i]-mean_b)*(b[i]-mean_b);
    }
    variance_a/=n;
    variance_b/=n;

    double std_dev_a = sqrt(variance_a);
    double std_dev_b = sqrt(variance_b);



    double answer = 0;


    for(int i=0;i<n;i++) {
        answer+=(a[i]-mean_a)*(b[i]-mean_b);
    }

    answer/=n*std_dev_a*std_dev_b;

    return answer;    
}
int main()
{
    int X,Y;
    cin>>X>>Y;

    double arr1[X];
    double arr1[Y];

    for(int i=0;i<X;i++)
    {
        cin>>arr1[i];

    }
    for(int i=0;i<Y;i++)
    {
        cin>>arr2[i];
    }
    double result=pearson_coeff(X,arr1,arr2);
    cout<<fixed << setprecision(3) << result<<"\n";
    return 0;
}