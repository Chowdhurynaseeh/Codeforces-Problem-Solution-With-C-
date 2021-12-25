#include <iostream>
using namespace std;
int main() {
    int count = 0;
    int a[5][5] ;
    /*
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j< 5; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        = {{0,0,0,0,1},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}
    }
    */
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j< 5; ++j){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j< 5; ++j){
            if(a[i][j] == 1) {
                    //cout<< i << " " <<j<<endl;
                    if(i != 2) {
                        count += abs(2 - i);
                    }
                    if(j != 2){
                        count += abs(2-j);
                    }
            }
        }
    }
    cout<<count<<endl;
}