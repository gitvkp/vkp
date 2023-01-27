 #include<stdio.h>

int sum (int x, int y);

void main()
{
	int num1, num2;
	printf("Sum = %d\n\r", sum(num1, num2));
	
}

int sum (int x, int y)
//functon to find the sum of 2 numbers
{
	printf("Enter the First Number : ");
	scanf("%d", &x);
	printf("\n\rEnter the Second Number : ");
	scanf("%d", &y);
	int sum = x+y;
	return sum;
}
