 #include<stdio.h>

int sum (int x, int y);

void main()
{
	int num1, num2, sum;
	printf("Sum of %d and %d = %d", 
			num1, num2, sum(num1, num2));
	
}

int sum (int x, int y)
{
	printf("Enter the First Number : ");
	getchar(&x);
	printf("\n\rEnter the Second Number : ");
	scanf("%d", &y);
	retrun x+y;
}
