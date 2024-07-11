#include <iostream>
#include <stack>

using namespace std;

int main()
{
  int i,j,n,a;
  stack<int> top;
  stack<int> lto;

  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>a;
    top.push(a);
    for(j=0; j<i; j++)
    {
      if(top[j]>top[i])
        lto[i]=j+1;
    }
  }
  for(i=0; i<n; i++)
    cout<<lto[i];
  
  return 0;
}