#include<stdio.h>
int main() //65010536
{
	int x, y;
	printf("Enter number : ");
	scanf_s("%d %d", &x, &y);
	x = x xor y;
	y = x xor y;
	x = x xor y;
	printf("%d %d", x, y);
}