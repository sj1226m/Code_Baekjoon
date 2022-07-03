#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int fnum, lnum;
    int *s = new int[arr.length()];
    for(int i=0; i<arr.length(); i++)
        s[i] = arr[i]-'0';

    int tmp = 0;
    for(int i=0; i<arr.length()-1; i++)
    {
        while(s[i+1] == s[i]+1) 
                tmp++;
    }
    for(int i=0; i<arr.length()-1; i++)
    {    
        if(tmp == arr.length()-1) 
        {
            fnum = s[0];
            lnum = s[tmp];
        }
        else if(tmp == 0)
        {
            if(s[0] == 9 && s[3] == 1) 
            {
                fnum = 9;
                lnum = s[arr.length()-2]*10 + s[arr.length()-1];
            }
            else if(s[0]*10 + s[1] == (s[2]*10 + s[3])+1)
            {
                fnum = s[0]*10 + s[1];
                lnum = s[arr.length()-2]*10 + s[arr.length()-1];
            }
            else
            {
                fnum = s[0]*100 + s[1]*10 + s[2];
                lnum = s[arr.length()-3]*100 + s[arr.length()-2]*10 + s[arr.length()-1];
            }
        }
        else if(tmp == 1)
        {
            if(s[2] == 1 && s[3] == 0)
            {
                fnum = s[0];
                lnum = s[arr.length()-2]*10 + s[arr.length()-1];
            }
            else if(s[2]*10 + s[3] == s[0]*10 + s[1])
            {
                fnum = s[0]*10 + s[1];
                lnum = s[arr.length()-2]*10 + s[arr.length()-1];
            }
            else
            {
                fnum = s[0]*100 + s[1]*10 + s[2];
                lnum = s[arr.length()-3]*100 + s[arr.length()-2]*10 + s[arr.length()-1];
            }
        }
        else if(tmp == 2)
        {
            if(s[3] == 1 && s[4] == 0)
            {
                fnum = s[0];
                lnum = s[arr.length()-2]*10 + s[arr.length()-1];
            }
            else
            {
                fnum = s[0]*100 + s[1]*10 + s[2];
                lnum = s[arr.length()-3]*100 + s[arr.length()-2]*10 + s[arr.length()-1];
            }
        }
        else
        {
            fnum = s[0];
            lnum = s[arr.length()-2]*10 + s[arr.length()-1];
        }
    }

    cout << fnum << " " << lnum;
    return 0;
}