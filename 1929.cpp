#include <iostream>
using namespace std;

int main()
{
    int M, N;
    int a[1000001] = {0, }; // 배열 0으로 초기화
    a[1] = 1;
    cin >> M >> N;
    for(int i=2; i<=N; i++)
    {
        for(int j=i*2; j<=N; j+=i)
            if(a[j] == 0)
                a[j] = 1;
    }
    for(int i=M; i<=N; i++)
        if(a[i] == 0)
            cout << i << "\n";
    return 0;
}