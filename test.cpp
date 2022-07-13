#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    int max = *max_element(q.begin(), q.end());
    cout << max;
    return 0;
}