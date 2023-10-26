// swap two numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c,temp;
    printf("Enter A value : \n");
    scanf("%d",&a);
    printf("Enter B value : \n");
    scanf("%d",&b);
    temp=a;
    c=b;
    b=temp;
    b=c;
    printf("A=%d\n B=%d\n");
    return 0;
    getch();
}
