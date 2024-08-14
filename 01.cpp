#include <iostream>
using namespace std;
int main()
{
  long long int a,arr[1000000],n,i;
  cin>>n;
  for(i=0; i<n; i++){
    cin>>a;
    arr[a]=1;
  }
  cin>>n;
  for(i=0; i<n; i++){
    cin>>a;
    cout<<arr[a]<<"\n";
  }//vfcvdfsdfdsfd
  return 0;
}