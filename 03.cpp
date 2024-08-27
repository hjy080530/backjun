#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    while(n){
        int A1,P1,R1,P2;
        cin>>A1>>P1>>R1>>P2;
        A1=(double)A1/P1;
        R1=(double)(3.14*(pow(R1,2)))/P2;
        if(A1>R1)cout<<"Slice of pizza"<<"\n";
        else cout<<"Whole pizza"<<"\n";
        n--;
    }

    return 0;
}