long long int factorial(int n){
    if (n == 1) return 1;   
    long long int result = 1;
    for(int i=2;i<=n;i++){
         result = result * i;
    }
    return result;
}