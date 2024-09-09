#include <iostream>

using namespace std;

int main(){
    int n,k;
    string h,v;
    cin>>n>>k;
    cin>>h;cacas˜
    k--;
    k=k%n;
    if((n-k)%2==0){
        for(int i=k+1; i<n; i++){
            printf("%c",h[i]);
        }
        for (int i=0; i<=k; i++)
        {
            printf("%c",h[i]);
        }
    }
    else{
        for(int i=0; i<k; i++){
            for(int j=i; j<j+k; j++){
                h[i]=v;
                h
            }
        }
    }
    return 0;
}