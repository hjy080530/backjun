#include <iostream>

using namespace std;

int main() {
  int N,m,M,T,R,i,time=0;
  cin>>N>>m>>M>>T>>R;
  int H=m;
  if(M-m<T){
    cout<<-1;
    return 0;
  }
  while(N){
    if(H+T>M){
      time++;
      H-=R;
    }
    else{
      H+=T;
      time++;
      N--;
    }
  }
  cout<<time;
  return 0;
}