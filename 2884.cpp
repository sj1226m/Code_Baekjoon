#include <iostream>
using namespace std;

int main()
{
    int H, M, rH, rM;
    cin >> H >> M;
    if(M < 45)
    {
        rM = M+15;
        if(H == 0)
            rH = 23;
        else
            rH = H-1;
    }
    else
    {
        rH = H;
        rM = M-45;
    }
    cout << rH << " " << rM;
    return 0;
}