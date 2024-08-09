#include <iostream>
#include <map>
using namespace std;

int main() {
  long long int N,a,b,i;
  long long int h = 0;
    
  cin>>N;

  map<long long int, int> ga;
  map<long long int, int> se;

  for(i=0;i<N;i++) {
    cin>>a>>b;
    ga[a]++;
    se[b]++;
  }
  for (auto &x:ga) {
    if (x.second > 1) h++;
  }
  for (auto&y:se) {
    if (y.second > 1) h++; 
  }
  cout<<h<<endl;

    return 0;
}