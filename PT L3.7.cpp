#include "stdio.h"

int main()
{
	//Начальное значение диапозона для сложения
	int a=1;
	//Конечное значение диапозона для сложения
	int j=100;
	//Сумма сложения диапозона
	int sum=0;
	
	for (int i=a;i<=j;i++)
	{
		sum=sum+i;
	}
	
	printf("\nThe sum from %i to %i is: %i",a,j,sum);
}
