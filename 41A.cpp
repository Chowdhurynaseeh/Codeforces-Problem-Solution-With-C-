#include <iostream>
using namespace std;
int main() {
    string str1,t,str2 = "";
    cin >> str1 >> t;
    for(int i = str1.length() - 1; i >= 0; i--){
        str2 += str1[i];
    }
    if(str2 == t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}