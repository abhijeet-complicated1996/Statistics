#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
double median(vector<int>& arr, int start, int end)
{
    if ((end-start)%2==0)
        return arr[start+(end-start)/2];
    else
        return ((float)arr[start+(end-start)/2]+arr[start+(end-start)/2+1])/2;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    double f1, f2, f3;
    vector<int> v;
    vector<int> elements(n), freqs(n);
    for (int i=0;i<n;i++)   cin >> elements[i];
    for (int i=0;i<n;i++)   cin >> freqs[i];

    for (int i=0;i<n;i++)
        for (int j=0;j<freqs[i];j++)
            v.push_back(elements[i]);
    sort(v.begin(), v.end());
    f2 = median(v, 0, v.size()-1);
    cout << fixed << setprecision(1);
    if (v.size()%2)
    {
        f1 = median(v, 0, v.size()/2-1);
        f3 = median(v, v.size()/2+1, v.size()-1);
    }
    else
    {
        f1 = median(v, 0, v.size()/2-1);
        f3 = median(v, v.size()/2, v.size()-1);
    }
    cout << f3-f1;
    return 0;
}
