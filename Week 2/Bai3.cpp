#include <iostream>
using namespace std;
bool soCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}
int main() {
    int n,m;
    cin >> n>>m;
    for (int i=n;i<=m;i++){
        if (soCP(i)) cout<<i<<" ";
    }
}
