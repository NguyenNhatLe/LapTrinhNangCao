
void rFilter(char *s) {
    int n=strlen(s);
    for(int i=n-1;i>=0;i--){
        if((*(s+i)>='a' &&*(s+i)<='z')||(*(s+i)>='A' &&*(s+i)<='Z')){
            break;
        }
        *(s+i)='_';
    }
}