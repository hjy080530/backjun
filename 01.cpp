#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // 개행 문자 무시

    vector<string> students(n);
    map<string, int> popularity;

    // 학생 이름을 입력받고 벡터와 맵에 저장
    string names_line;
    getline(cin, names_line);
    stringstream ss(names_line);
    string name;
    int index = 0;
    while (ss >> name) {
        students[index++] = name;
        popularity[name] = 0;  // 초기 인기도 0으로 설정
    }

    // 각 학생이 좋아하는 학생 목록을 읽어 인기도를 계산
    for (int i = 0; i < n; ++i) {
        string liked_students_line;
        getline(cin, liked_students_line);
        stringstream ss_liked(liked_students_line);
        while (ss_liked >> name) {
            // 좋아하는 학생의 인기도를 증가시킴
            if (popularity.find(name) != popularity.end()) {
                popularity[name]++;
            }
        }dscds
    }

    // 벡터를 인기도 기준으로 정렬, 인기도가 같은 경우 이름 기준으로 정렬
    sort(students.begin(), students.end(), [&popularity](const string& a, const string& b) {
        if (popularity[a] == popularity[b]) {
            return a < b;
        }
        return popularity[a] > popularity[b];
    });

    // 결과 출력
    for (const auto& student : students) {
        cout << student << " " << popularity[student] << endl;
    }

    return 0;
}