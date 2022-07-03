#include <iostream>
#include <string>
using namespace std;

string bw = "BWBWBWBW";
string wb = "WBWBWBWB";

int compareWithBW(string arr[])
{
    int cnt = 0;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if(i%2 == 0){
                if(arr[i][j] == wb[j]) cnt++;
            }
            else{
                if(arr[i][j] == bw[j]) cnt++;
            }
        }
    return cnt;
}

int compareWithWB(string arr[])
{
    int cnt = 0;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if((i+j)%2 == 0){
                if(arr[i][j] == 'B') cnt++;
            }
            else{
                if(arr[i][j] == 'W') cnt++;
            }
        }
    return cnt;
}

int main()
{
    int M, N;
    cin >> N >> M;
    string *a = new string[N];
    for(int i=0; i<N; i++) cin >> a[i];

    int max = 0;
    for(int i=0; i<M-7; i++)
    {   
        string tmp[8];
        for(int j=0; j<N-7; j++)
        {
            int idx = j;
            for(int k=0; k<8; k++)
            {
                tmp[k] = a[idx++].substr(i, 8);
            }
                
            if(compareWithBW(tmp) > max) max = compareWithBW(tmp);
            if(compareWithWB(tmp) > max) max = compareWithWB(tmp);
        }
    }

    cout << 64-max;

    return 0;
}

