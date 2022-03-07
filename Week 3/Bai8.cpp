#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; 
	getline(cin, s);

	int i = 0;
	while (i != s.size()) {
		if (i > s.size() - 4 || s.substr(i, 4) != "Zues") {
			cout << s[i];
			i++;
		}
		else {
			cout << "Zeus";
			i += 4;
		}
	}
	return 0;
}
