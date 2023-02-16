#include "stdio.h"

int main()
{
	//Таблица умножения на 5 чисел от 1 до 10
	int j =5;
	for(int i=1;i<11;i++)
	{
		printf("%i*%i=%i\n",i,j,i*j);
	}
	
	printf("__________________________\n\n");
	
	//Программа заверщает свою работу при вводе цифры 7
	int num=0;
	int x=7;
	while (num!=x)
	{
		//Получаем число от пользователя
		printf("Imput X=");
		scanf("%i",&num);
		
		//Число равно x!
		if (num==7)
		{
			printf("Yes it is x\n");
			break;
		}
		//Число больше x?
		if (num>x)
		{
			printf("The number is greater than x\n");
		}
		
		//Число меньше x?
		if (num<x)
		{
			printf("The number is less than x\n");
		}
		
		//Число больше/меньше/равно 10?
		if (num>10)
		{
			printf("The number is less than 10\n");
		}
		
		else if (num<10)
		{
			printf("The number is less than 10\n");
		}
		
		else
		{
			printf("The number is 10\n");
		}
		
		//Число делиться на 2?
		if (num%2==0)
		{
			printf("Number divisible by 2\n");
		}
		else
		{
			printf("Number is not divisible by 2\n");
		}
		
		//Число делиться на 3?
		if (num%3==0)
		{
			printf("Number divisible by 3\n");
		}
		else
		{
			printf("Number is not divisible by 3\n");
		}
		
		
		
		printf("__________________________\n\n");
	}

}
