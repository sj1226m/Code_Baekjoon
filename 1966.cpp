#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int *N, *M = new int [T];
    for(int i=0; i<T; i++)
    {
        cin >> N[i] >> M[i];
        vector<int> v;
        for(int j=0; j<N[i]; j++) 
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        int nowidx = M[i];
        int outcnt = 0;
        int max = *max_element(v.begin(), v.end());
        while(nowidx != 0 || v[nowidx] != max)
        {
            if(nowidx == 0)
            {
                int fir = v[0];
                v.erase(v.begin());
                v.push_back(fir);
                nowidx = v.size()-1;
            }
            else
            {
                if(v[0] == max)
                {
                    v.erase(v.begin());
                    max = *max_element(v.begin(), v.end());
                    outcnt++;
                    nowidx--;
                }
                else
                {
                    int fir = v[0];
                    v.erase(v.begin());
                    v.push_back(fir);
                    nowidx--;
                }
            }
        }
        cout << ++outcnt << "\n";
    }
    return 0;
}  