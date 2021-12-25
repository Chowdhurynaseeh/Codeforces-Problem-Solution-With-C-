#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,str = "";
    cin>>a>>b;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == b[i]){
            str += '0';
        }else{
            str += '1';
        }
    }
    cout<<str<<endl;
}