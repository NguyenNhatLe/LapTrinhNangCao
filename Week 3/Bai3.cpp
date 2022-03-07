#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int k = 0;
    while (k < n - 1) {
        while (arr[k] == arr[k + 1] && k < n - 1) {
            for (int j = k; j < n - 1; j++) arr[j] = arr[j + 1];
            n--;
        }
        k++;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
