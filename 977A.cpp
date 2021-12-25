#include <iostream>
using namespace std;
long long int lastdigit(int n){
    return n % 10;
}
long long int getOutPut(long long int n,long long int k) {
    while(k-- != 0){
        if(lastdigit(n) != 0) {
            n -= 1;
        }else{
            n /= 10;
        }
    }
    return n;
}
int main() {
    long long int n,k;
    cin>>n>>k;
    cout<<getOutPut(n,k)<<endl;
}