#include <iostream>

using namespace std;

int main() {
    int a,i,n,c;
    cin>>n;
    while(n){
        cin>>a>>c;
        if(a>c)a=(a/c)+1;
        if(a%c>0)a=(a/c)+1;
        else a=a/c;
        cout<<a;
        n--;
    }

    return 0;
}