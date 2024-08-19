#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int i,P,a[1000],N,count=0;
  cin>>P>>N;
  for(i=0; i<N; i++) cin>>a[i];
  sort(a,a+N);
  for(i=0; i<N; i++){
    if(P<200){
      P+=a[i];
      count++;
    }
  }
  cout<<count;
	return 0;
}