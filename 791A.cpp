#include <iostream>
using namespace std;
int main() {
    int a,b,count = 0;
    cin>>a>>b;
    bool flag = true;
    do{
        a = a * 3;//12 36 72
        b = b * 2;//18 36 72
        count++;
        //cout<<a<<" "<<b<<endl;
        if(a > b) {
            break;
            flag = false;
        }
    }while (flag);
    cout<<count<<endl;
}
