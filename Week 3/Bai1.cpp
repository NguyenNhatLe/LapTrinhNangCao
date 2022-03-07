#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    bool check = true;
     for(int i = 0 ; i < n ;i++){
        if(a[i] != b[i]){
            check = false;
        }
    }
    if(check == true) cout << "YES";
    else cout << "NO";
    return 0;
}

