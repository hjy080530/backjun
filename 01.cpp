#include <iostream>
using namespace std;


long long int loop(long long int v, long long int re) {
    if (v <= 0) {
        return re;
    } else {
        re+=v%10; 
        v=v/10;
        re*=10;
        return loop(v,re);
    }
}


void f(long long int x, long long int y) {
    long long int h = loop(x, 0)/10 + loop(y, 0)/10; 
    long long int result = loop(h, 0)/10;
    cout<<result<<"\n"; 
}

int main() {
    long long int n, a, b, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a >> b;
        f(a, b);
    }

    return 0;
}