#include <iostream>
using namespace std;
int main() {
    int n,t = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            t = 1;
            break;
        }
    }
    if(t){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
}