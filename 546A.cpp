#include <iostream>
using namespace std;
int calculateValue(int k,int n,int w){
    int i = 1, totalCost = 0;
    while(i <= w){
        totalCost += i * k;
        i++;
    }
    if(totalCost > n){
        return totalCost - n;
    }
    return 0;
}
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    //3 17 4 3 6 9 12
    cout<<calculateValue(k,n,w)<<endl;

}