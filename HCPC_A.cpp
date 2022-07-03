#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int n, a, b, X;
        cin >> n >> a >> b;

        if(a+b > n)
            X = a;
        else
            X = n-b;
        if(X == 1) cout << "The scoreboard was frozen with 1 minute remaining.\n";
        else cout << "The scoreboard was frozen with " << X << " minutes remaining.\n";  
    }
    return 0;
}