#include <iostream>
using namespace std;
int main() {
    int temp;
    int n;
    cin >> n;
    for(int x = -n; x <= n; x++){
        for(int y = -n; y <= n; y++){
            temp = x;
            if (x >= 0 && y >= -(n-x) && y <= n-x) {
                cout << "* " ;
            }

            else if (x<0 && y >= -(n + temp) && y <= n + temp){
                cout<<"* ";
            }
            else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
}
