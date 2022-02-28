#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin >>a>>b>>c;
    if (a+b<=c||a<0||b<0||c<0) 
        cout <<"invalid";
    else {
        double p= (a+b+c)/2.0;
        double S;
        S= sqrt(p*(p - a)*(p - b)*(p - c));
        cout<<setprecision(2)<<fixed<<S;
    }
    return 0;
    
}
