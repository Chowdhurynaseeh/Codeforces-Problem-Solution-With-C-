#include <iostream>
using namespace std;
int main() {
    int n,a,b,count = 0;
    cin>>n;
    while(n-- != 0) {
        cin>>a>>b;
        if(b - a >= 2){
            count++;
        }
    }
    cout<<count<<endl;
}