#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int t,count = 0;
    cin>>t;
    string stone;
    cin >>stone;
    for(int i = 0; i < t; i++) {
        if(stone[i] == stone[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
}