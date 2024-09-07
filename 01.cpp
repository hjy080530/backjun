#include <iostream>
#include <string>
using namespace std;

void reverseSubstr(string &str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    int n, m;
    string a;
    cin >> n >> m;
    cin >> a;
    for (int i=0; i<=n-m; i++) {
        reverseSubstr(a, i, i + m - 1);
    }
    
    cout << a;
    return 0;
}