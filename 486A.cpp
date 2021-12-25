#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long int n;
    scanf("%lld",&n);
    if((n&1)){
        cout <<-((n+1) >> 1)<<endl;
    }else{
        cout<<(n >> 1) <<endl;
    }

    /*
        if(!n&1)
        4   0 1 0 0 
            0 0 0 1 
            0 0 0 0
            0 1 0 0
            n >> 1
            0  0  1  0 = 2
        5   0 1 0 1
            0 0 0 1
            -(n+1>>1)
        6   0 1 1 0
        -    0 0 1 1 = 3 = -3
    */
}