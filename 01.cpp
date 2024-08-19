#include <iostream>

using namespace std;

int main()
{
  long long int n,m,i,j;
  cin>>n>>m;
  for(i=n; i<m; i++){
    int x=0;
    for(j=2;j<i; j++){
      if(i%j==0){
        x++;
        break;
      }
    }
    if(x==0)cout<<i<<"\n";
  }
	return 0;
}