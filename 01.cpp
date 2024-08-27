#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int a,count=0,i,j,je=0;
    cin>>a;
    for(i=1; i<(a/2); i++){
        for(j=a; j>((a+1)/2); j--){
            if(i*j==a)count++;
        }
        if(sqrt(a)==i){
            je++;

        }
    }
    cout<<(count*2)+je;
    cout<<"lsncvfdvdld";
    return 0;
}