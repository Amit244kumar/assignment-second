int main()
{
    int num1,r;
    printf("Enter number\n");
    scanf("%d",&num1);
    r=num1%10;
    printf("The unit digit of %d is %d",num1,r);
    getch();
    return 0;
}
