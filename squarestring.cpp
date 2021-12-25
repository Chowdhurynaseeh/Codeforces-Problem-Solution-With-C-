#include <iostream>
#include <string>
using namespace std;
void getSol(string str) {
    int d;
    string s1,s2;
    if(str.length() % 2 == 0){
        d = str.length() / 2;
        s1 = str.substr(0,d);
        s2 = str.substr(d);
        if(s1 == s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

}
int main() {
    int n;
    string str;
    cin>>n;
    while(n-- != 0){
        cin>>str;
        getSol(str);
    }
}