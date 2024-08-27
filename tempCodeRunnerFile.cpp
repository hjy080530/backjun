#include <iostream>

using namespace std;

int main() {
    long long int a,count=0,i,j;
    cin>>a;
    for(i=1; i<=(a/2); i++){
        for(j=(a/2); j>=0; j--){
            if(i*j==a)count++;
        }
    }
    cout<<count*2;

    return 0;
}