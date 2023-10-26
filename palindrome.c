#include <string.h>
#include <stdio.h>
#include <conio.h>
main()
{
	char str[40], rev[40];
	int x;
	printf("Enter the string: ");
	scanf("%s", str);
	strcpy(rev, str);
	strrev(rev);
	printf("Reversed string is: %s \n",rev);
	x = strcmpi(str, rev);
	if (x == 0)
		printf("Given string is a palindrome");
	else
		printf("Given string is not a palindrome");
	getch();
}
