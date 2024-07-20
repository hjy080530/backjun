#include<iostream>

using namespace std;

int main(){
  long long int n,a[100]={0,10,20,30,40,50,60,70,80,90,1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
  int i,h[10]={0},j=0;
  string c[10],b[10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"} ;

  for(i=0; i<3; i++)
    cin>>c[i];
  
  for(i=0; i<10; i++){
    if(c[j]==b[i]){
      n=i*10;
      j++;
      break;
    }
  }

  for(i=0; i<10; i++){
    if(c[j]==b[i]){
      n+=i;
      j++;
      break;
    }
  }
  
  for(i=0; i<10; i++){
    if(c[j]==b[i]){
      n=n*a[10+i];
      j++;
      break;
    }
  }
  
  cout<<n;
  
  return 0;
}