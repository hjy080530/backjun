#include <iostream>

using namespace std;

int main() {
    long long int a, n;
    
    while (1) {
        cin>>a;
        if (a==0) return 0;
        cout<<a<<" ";
        while (a>=10){
                n=1;
              cout<<n;  
            while (a>0) { 
                    n*=(a%10);
                    a/=10;
                }
                cout<<n<<" "; 
                a=n;
            
        }
        cout<<"\n"; 
    }
    return 0;
}