#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int S, n;
    cin >> S;
    vector<int> v;
    for(int i=0; i<S; i++) 
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cin >> n;

    int i=0;
    while(v[i] < n)
        i++;
    
    if(v[i] == n) 
        cout << 0;
    else if(v[i]-1 == n)
        cout << n-v[i-1]-1;
    else if(n-1 == v[i-1]-1) 
        cout << v[i]-1-n;
    else
        cout << (n-v[i-1])*(v[i]-n)-1;

    return 0;
}