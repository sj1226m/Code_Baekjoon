#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0; i<n; i++) cin >> a[i];
    
    int idx = 0;
    vector<int> stack;
    stack.push_back(0);
    vector<string> res;

    int input = 1;
    stack.push_back(input);
    res.push_back("+");

    while(input != n)
    {
        if(a[idx] != stack.back())
        {
            stack.push_back(++input);  
            res.push_back("+");
        }
        else
        {    
            stack.pop_back();
            res.push_back("-");
            idx++;
        }
    } 

    if(idx <= n-1)
    {
        while(idx <= n-1)
        {
            if(a[idx++] == stack.back())
            {
                stack.pop_back();
                res.push_back("-");
            }
            else
            {
                res.push_back("NO");
                break;
            }    
        }
    }
    if(res.back() == "NO") 
        cout << "NO";
    else
    {
        for(int i=0; i<res.size(); i++)
            cout << res[i] << "\n";
    }
        
    return 0; 
}