#include <iostream>
#include <set>
using namespace std;
int main() {
    long long int t,n,i;
    set<long long int>s1;
    cin>>t;
    while(t-- != 0){
        cin>>n;
        i = 1;
        while (i * i <= n)
        {
            s1.insert(i * i);
            i++;
        }
        i = 1;
        while(i * i * i <= n){
            s1.insert(i*i*i);
            i++;
        }
        cout<<s1.size()<<endl;
        s1.clear();
    }
   
}
