int main()
{
    int num1,sum=0;
    printf("Enter the three digit number");
    scanf("%d",&num1);
    sum=sum+num1%10;
    num1=num1/10;
    sum=sum+num1%10;
    num1=num1/10;
    sum=sum+num1%10;
    printf("The Three digit number sum is %d",sum);
    getch();
    return 0;
}
