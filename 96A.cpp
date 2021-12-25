#include <iostream>
using namespace std;
int main() {
    string str = "001001";
    // cin >> str;
    int x = 0, y = 0, z = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '0'){
            x++;
            y = 0;
        }else{
            y++;
            x = 0;
        }
        if(y == 7 || x == 7){
            z = 1;
        }
    }
    if(z){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}