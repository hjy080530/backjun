#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue <int> st;
    int n, k;
    string a;

    cin >> n;

    while (n--) {  // n번 반복하기 위해 --n 사용
        cin >> a;

        if (a == "push") {
            cin >> k;
            st.push(k);
        } 
        else if (a == "pop") {
            if (st.empty()) {
                cout << "-1\n";
            } else {
                cout << st.front() << "\n"; 
                st.pop();
            }
        } 
        else if (a == "size") {
            cout << st.size() << "\n";
        } 
        else if (a == "empty") {
            cout << (st.empty() ? 1 : 0) << "\n";
        } 
        else if (a == "front") {
            if (st.empty()) {
                cout << "-1\n";
            } else {
                cout << st.front() << "\n";
            }
        }
        else if (a == "back") {
            if (st.empty()) {
                cout << "-1\n";
            } else {
                cout << st.back() << "\n";
            }
        }
    }
    
    return 0;
}