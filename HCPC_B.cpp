#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    int *a = new int[N+1]();
    int *tmp = new int[N+1]();
    for(int i=1; i<=N; i++){
        cin >> a[i];
        tmp[i] = -1;
    } 

    cin >> M;
    for(int i=0; i<M; i++){
        int x, y;
        cin >> x >> y;
        if(a[x] < a[y]){
            tmp[y] = x;
            while(tmp[tmp[y]] != -1)
                tmp[y] = tmp[tmp[y]];
        }
        else{
            tmp[x] = y;
            while(tmp[tmp[x]] != -1)
                tmp[x] = tmp[tmp[x]];
        }
    }

    int cnt = 0;
    long long result = 0;
    for(int i=1; i<N+1; i++)
        if(tmp[i] == -1){
            result += a[i];
            cnt++;
        }
    
    cout << result << " " << cnt;
    return 0;
}