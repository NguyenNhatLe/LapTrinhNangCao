void Draw (int k , int i)
{
    for (int j=0; j<k; j++) cout<<" ";
    for (int j=0; j<i; j++) cout<<"*";
    cout<<endl;
}
void Right (int n)
{
    int i = n;
    int k = 0;
    while (i>=1 && k<=(n*2-2))
    {
        Draw(k, i);
        i--;
        k+=2;
    }
    i+=2;
    k-=4;
    while (i<=n && k>=0)
    {
        Draw(k, i);
        i++;
        k-=2;
    }
}
void Left (int n)
{
    int i = n;
    int k = n-1;
    while (i>=1 && k>=0)
    {
        Draw(k, i);
        i--;
        k--;
    }
    i+=2;
    k+=2;
    while (i<=n && k<=n-1)
    {
        Draw(k, i);
        i++;
        k++;
    }
}
void printArrow(int n, bool left)
{
    if (left!=true) Right(n);
    else Left(n);
}