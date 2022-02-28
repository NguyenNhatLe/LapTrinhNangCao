#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin>>n;
    int count=0;
  do{
      count ++;
      n/=10;
  }
  while (n!=0);
    cout<< count;
    return 0;
}
