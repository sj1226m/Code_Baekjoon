#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    int is;
    for(int i=0; i<8; i++) cin >> arr[i];
    if(arr[0] == 1)
    {
        for(int i=0; i<7; i++)
        {
            if(arr[i+1] != arr[i]+1) 
            {
                is = 0;
                break;
            }
            is = 1;
        }
    }
    if(arr[0] == 8)
    {
        for(int i=0; i<7; i++)
        {
            if(arr[i+1] != arr[i]-1)
            {
                is = 0;
                break;
            }
            is = 2;
        }
    }
    switch(is)
    {
        case 2:
            cout << "descending";
            break;
        case 1:
            cout << "ascending";
            break;
        case 0:
            cout << "mixed";
        default:
            break;
    }
    return 0;
}