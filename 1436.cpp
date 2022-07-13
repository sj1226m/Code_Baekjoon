#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, tmp = 0;
    cin >> N;
    int res = 666;
    while(tmp != N)
    {
        string s = to_string(res);
        if(s.find("666") != string::npos)
            tmp++;
        res++;
    }
    cout << res-1;
    
    return 0;
}