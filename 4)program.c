int main()
{
    int x,y;
    printf("Enter x value:");
    scanf("%d",&x);
    printf("Enter y value:");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The x value is %d\nThe y value is %d",x,y);
    getch();
    return 0;
}
