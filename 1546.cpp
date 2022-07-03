#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    double *narr = new double[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int M = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > M) M = arr[i];

    double sum = 0;
    for(int i=0; i<n; i++){
        narr[i] = (double)arr[i]/M*100;
        sum += narr[i];
    }

    double aver = (double)sum/n;
    cout << aver;
}