#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tmp;
    while(1)
    {
        cin >> tmp;
        if(tmp == 0) break;
        int cnt = 0;
        string s = to_string(tmp);
        for(int i=0; i<s.length()/2; i++)
            if(s[i] == s[s.length()-i-1]) 
                cnt++;
        if(cnt == s.length()/2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}