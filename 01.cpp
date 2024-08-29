#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    string a,k;
    cin>>k>>n;
    while(n){
        cin>>a;
        if(a==k)count++;
        n--;
    }
    cout<<count;
    return 0;
}