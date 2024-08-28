#include <iostream>

using namespace std;

int main() {
    int a[10],i,j;
    for(i=0; i<3; i++){
        for(j=0; j<6; j++)cin>>a[j];
         a[5]-=a[2];
         if(a[5]>59){
            a[5]-=60;
            a[4]--;
            if(a[5]>)
        }
         a[4]-=a[1];
         if(a[4]>59){
            a[1]-=100;
            a[3]--;
        }
        a[3]-=a[0];
        cout<<"\n"<<a[3]<<" "<<a[4]<<" "<<a[5];
    }
    return 0;
}