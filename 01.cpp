#include <iostream>
#include <algorithm>
using namespace std;

int ten(int n) {
    if (n < 10) return n;      
    return ten(n / 10);
}
int main() {
    int n, a[10001], b[10001];
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[j];
        }
        sort(a, a + 5);  
        int hap = 0;
        for (int j = 0; j < 3; j++) {
            hap += a[j]; 
        }
        b[i] = ten(hap); 
    }

    int *c = max_element(b + 1, b + n + 1); 
    for (int i = 1; i <= n; i++) {
        if (*c == b[i]) { 
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}