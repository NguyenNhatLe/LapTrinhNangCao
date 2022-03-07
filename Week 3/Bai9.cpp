#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int countStartSpaces = 0;
    string s ;
    getline(cin,s) ;
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] == ' ') countStartSpaces++ ;
        if (s[i] != ' ') break;
    }
    cout << setw(countStartSpaces+1) << setfill(' ') ;
    for (int i = countStartSpaces ; i < s.size() ; i++) {
        if (s[i] != ' ' && s[i+1] != ' ') cout << s[i] ;
        if (s[i] != ' ' && s[i+1] == ' ') cout << s[i] << " " ;
    }
}
