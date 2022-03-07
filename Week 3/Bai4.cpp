#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void insert(double a[], int& n, double x, int k) {
    n++;
    for (int i = n - 1; i > k; i--)
        a[i] = a[i - 1];

    a[k] = x;
}
int main() {
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    double x;
    cin >> x;
    insert(arr, n, x , 1);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << setprecision(2)<<fixed<<arr[i] << " ";
    }
    return 0;
}
