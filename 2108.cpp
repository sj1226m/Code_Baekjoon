#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int N, sp, median, cb, range, sum=0;
    int cnt[8001] = {0, };
    cin >> N;
    int *a = new int[N];
    for(int i=0; i<N; i++)
    {
        cin >> a[i];
        sum += a[i];
        cnt[a[i]+4000]++;
    }

    double s = (double)sum/N;
    sp = round(s);

    sort(a, a+N); 
    median = a[N/2];

    int max = *max_element(cnt, cnt+8001); //최대출현횟수
    int tmp = 0;
    vector<int> v;
    for(int i=0; i<8001; i++)
    {
        if(cnt[i] == max)
        {
            tmp++;
            v.push_back(i-4000);
        }
    }
    if(tmp == 1)
        cb = v[0];
    else
        cb = v[1];
 

    if(N == 0)
        range = a[0];
    else
        range = a[N-1] - a[0];

    cout << sp << "\n" << median << "\n" << cb << "\n" << range;
    return 0;
}