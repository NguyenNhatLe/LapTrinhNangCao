#include <iostream>
using namespace std;
int main()
{
    int n, m, chicken, dog;
    cin >> n >> m;
   
    if (m % 2 != 0) cout << "invalid" << endl;
    for (chicken = 0; chicken <= 50; chicken++) {
        for (dog = 0; dog <= 25; dog++) {
            if ((chicken * 2 + dog * 4 == m) && (chicken + dog == n))

                cout << "chicken = " << chicken << ", " << "dog = " << dog;
        }
    }
}
