#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
int main() {
    int n,count = 0;
    cin>>n;
    string str;
    cin >>str;
    set<char> s1;
    for(int i = 0; i < n; i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            s1.insert(toupper(str[i]));
        }
    }
    set<char>:: iterator itr;
    for(itr = s1.begin(); itr != s1.end(); itr++){
        count++;
    }
    if(count == 26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}