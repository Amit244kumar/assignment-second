int main()
{
    int x,y,temp;
    printf("Enter x value:");
    scanf("%d",&x);
    printf("Enter y value:");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("The x value is %d\nThe y value is %d",x,y);
    getch();
    return 0;
}
