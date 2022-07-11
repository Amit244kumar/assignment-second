int main()
{
    int n,c;
    printf("Enter the number");
    scanf("%d",&n);
    c=n%10;
    n=n-c;
    printf("The result is %d",n);
    getch();
    return 0;
}
