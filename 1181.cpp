#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(string &s1, string &s2)
{
    if(s1.length() == s2.length()) 
        return s1 < s2;
    else
        return s1.length() < s2.length();
}

int main()
{
    int N;
    cin >> N;
    string *a = new string[N];
    vector<string> res;

    for(int i=0; i<N; i++)
    {
        string tmp;
        cin >> tmp;
        res.push_back(tmp);
    }

    sort(res.begin(), res.end(), compare);
    res.erase(unique(res.begin(), res.end()), res.end());
    
    for(int i=0; i<res.size(); i++)
        cout << res[i] << endl;

    return 0;
}