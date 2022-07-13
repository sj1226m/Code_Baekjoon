#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int K, N;
    long long start = 1, mid, end, res = 0;
    cin >> K >> N;
    int *a = new int[K];
    for(int i=0; i<K; i++) 
        cin >> a[i];

    end = *max_element(a, a+K);

    while(start <= end)
    {
        mid = (start+end)/2;
        int cnt = 0;
        for(int i=0; i<K; i++)
            cnt += a[i]/mid;
        if(cnt < N) 
            end = mid-1;
        else
        { 
            start = mid+1;
            res = mid;
        }
    }
    cout << res;
    
    return 0;
}