#include <iostream>

using namespace std;

int main() {
  int i,t,n,f,hap=0;

  cin>>t>>n;

  for(i=0; i<n; i++){
    cin>>f;
    hap+=f;
  }
  if(hap>=t)cout<<"Padaeng_i Happy";
  else cout<<"Padaeng_i Cry";
  return 0;
}