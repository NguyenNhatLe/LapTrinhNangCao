#include <iostream>
using namespace std;
bool Check(int a[], int n) {

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i])
            return false;
    }
    return true;
}
int main() {
    int k;
    cin >> k;
    int array[100];
    for (int i = 0; i < k; i++) cin >> array[i];

    if (Check(array, k)) {
        cout << "Symmetric array.";
    }
    else {
        cout << "Asymmetric array.";
    }

    return 0;
}
