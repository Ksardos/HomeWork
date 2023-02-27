#include "stdio.h"

int main()
{
	//Количество вводимых значений
	int num;
	//Сумма
	int sum=0;
	//Максимум
	int max;
	//Минимум
	int min;
	//Среднее
	float average=0;
	
	
	//Ввод количества принимаемых значений
	printf("Enter the number of values:");
	scanf("%i", &num);
	
	//Создаем массив заданого размера
	int *numbers = new int[num];
	
	for (int i = 0; i < num; i++)
	{
		scanf("%i", &numbers[i]);
		
		//Заполняем перменные на при первой этерации цикло
		if (i == 0)
		{
			min = numbers[i];
			max = numbers[i];
		}
		
		//Проверка на минимальное значение
		if (min > numbers[i])
		{
			min = numbers[i];
		}
		
		//Проверка на максимальное значение
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		
		//Суммирование значений
		sum += numbers[i];
		
	}
	
	//Среднее значение
	average = (float)sum / (float)num;
	
	//Вывод результатов
	printf("__________________________\n\n");
	printf("Min %i\n", min);
	printf("Max %i\n", max);
	printf("Sum %i\n", sum);
	printf("Average %f\n", average);
}
