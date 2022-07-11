int main()
{
    int n,c,i,x=0,v=1,result;
    printf("Enter the number ");
    scanf("%d",&n);
    i=n%10;
    n/=10;
    c=n;
    while(n)
    {
        n/=10;
        x++;
    }
    while(x){
       v*=10;
       x--;
    }
    result=i*v+c;
    printf("The result is %d",result);
    getch();
    return 0;
}
