int main()
{
    int n,i=0,p;
    printf("Enter number:");
    scanf("%d",&n);
    p=n;
    while(n)
    {
        i++;
       if(n%2==1)
          break;
       n=n/2;
    }
    printf("The LSB of %d is %d",p,i);
    getch();
    return 0;
}
