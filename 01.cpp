#include <iostream>
#include <stdio.h> 
#include <vector>
using namespace std;
void Hex(long long n) {
    vector<int> digits;
    
    while (n > 0) {
        digits.push_back(n % 16);
        n /= 16;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }
    cout<<"\n";
}
void Oct (long long n){
    vector <int>digi ;
    while (n > 0) {
        digi.push_back(n % 8);
        n /= 8;
    }

    for (int i = digi.size() - 1; i >= 0; i--) {
        cout << digi[i];
    }
    cout<<" ";
}
int main() {
    long long int h,i, t, k, n;
    cin >> t; 

    for (i = 0; i < t; i++) {
        cin >> k >> n;
        h=n; 
        if(n<8)h=0;
        printf("\n %lld ", k);
        Oct(n);
        cout<<n<<" ";
        Hex(n);
    }
    
    return 0;
}