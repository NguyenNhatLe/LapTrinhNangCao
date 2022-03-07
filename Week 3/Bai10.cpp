#include <iostream>
using namespace std ;

void checkUsername(string s){
    int cnt  = 0;
	for(int i = 0 ; i < s.size()  ;i++ ){
		if(isalnum(s[i])) cnt++;
	}
	if((s.size() < 6 ||s.size() > 15) || (cnt  < s.size() ) || ('0'<= s[0] && s[0] <= '9')  ){
		cout << "Invalid username.";
	}else{
		cout << "Valid username.";
	}
}
int main(){
	string s;
	cin >> s;
	checkUsername(s);
	return 0;
}
