#include<iostream>
using namespace std;
int main(){
  char a[100]="WelcomeToSMUPC";
  int b;
  cin>>b;
  int x=b%14;
  if(x==0)x=14;
  cout<<a[x-1];
  return 0;
   
}