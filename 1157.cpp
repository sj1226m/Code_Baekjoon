#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int *tmp = new int[str.length()];
    for(int i=0; i<str.length(); i++){
        tmp[i] = 0;
        if(str[i] >= 97 && str[i] <=122) str[i] -= 32;
    } 
    int idx = 0;
    tmp[0] = 0;

    for(int i=1; i<str.length(); i++){
        for(int j=0; j<i; j++){
            if(str[i] == str[j]){
                tmp[j]++;
                break;
            } 
        }
        tmp[idx++]++;
    }

    int max = tmp[0];
    int index = 0;  
    for(int i=1; i<str.length(); i++){
        if(tmp[i] > max) {
            max = tmp[i];
            index = i;
        }
    }
    
    int cnt = 0;
    for(int i=0; i<str.length(); i++){
        if(tmp[i] == max) cnt++;
    }
    
    if(cnt != 1) cout << "?";
    else cout << str[index];

    return 0;
}