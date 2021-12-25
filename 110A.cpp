#include<iostream>
using namespace std;
bool tmp = false;
int cnt = 0;
void getDigits(long long int n) {
    long long int r;
    while(n > 0) {
        r = n % 10;
        n = n / 10;
        if(r == 4 || r == 7){
            cnt++;
        }
    }
}

int main() {
    long long int n;
    cin>>n;
    getDigits(n);
    if(cnt == 4 || cnt == 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}