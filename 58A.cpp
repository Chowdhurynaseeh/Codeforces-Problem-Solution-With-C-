#include <iostream>
using namespace std;
int main() {
    string str, str2 = "hello";
    cin>>str;
    int x = 0, y = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == str2[x]){
            x++;
            y++;
        }
    }
    if(y == 5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}