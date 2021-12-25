#include<iostream>
using namespace std;
int getOutput(int x){
    if(x % 5 == 0){
        return x/5;
    }else{
        return x/5 + 1;
    }
}
int main() {
    int x;
    cin>>x;
    cout<<getOutput(x)<<endl;
}