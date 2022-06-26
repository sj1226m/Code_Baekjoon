#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str); //String 한줄 읽어
    int count = 1;
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ') count++;
    }
    if(str[0] == ' ') count--;
    if(str[str.length()-1] == ' ') count--;
    cout << count;
    return 0;
} 