#include "stdio.h"


int main()
{
	//День, месяц, год
	int day, month, year;
	

	printf("Enter your birthday in format: dd.mm.yyyy\n");
	scanf("%d.%d.%d", &day, &month, &year);

	printf("You entered: %02d.%02d.%d\n", day, month, year);

	//Год рождения високосный?
	if (year % 4 == 0)
	{
		printf("You were born on a leap year\n");
	}
	else
	{
		printf("You were born on a non-leap year\n");
	}

	//Год по восточному календарю	
	int index_year = year % 12;

	switch (index_year)
	{
		case 0:
		{
			printf("Year according to the eastern calendar - Monkey\n");
		}
			break;
		case 1:
		{
			printf("Year according to the eastern calendar - Rooster\n");
		}
			break;
		case 2:
		{
			printf("Year according to the eastern calendar - Dog\n");
		}
			break;
		case 3:
		{
			printf("Year according to the eastern calendar - Pig\n");
		}
			break;
		case 4:
		{
			printf("Year according to the eastern calendar - Rat\n");
		}
			break;
		case 5:
		{
			printf("Year according to the eastern calendar - Ox\n");
		}
			break;
		case 6:
		{
			printf("Year according to the eastern calendar - Tiger\n");
		}
			break;
		case 7:
		{
			printf("Year according to the eastern calendar - Rabbit\n");
		}
			break;
		case 8:
		{
			printf("Year according to the eastern calendar - Dragon\n");
		}
			break;
		case 9:
		{
			printf("Year according to the eastern calendar - Snake\n");
		}
			break;
		case 10:
		{
			printf("Year according to the eastern calendar - Horse\n");
		}
			break;
		case 11:
		{
			printf("Year according to the eastern calendar - Sheep\n");
		}
			break;
		default:
		{
			printf("Error");
		}
	}

	//Знак зодиака
	if ((day > 20 && month == 1) || (day < 20 && month == 2)) { printf("Your zodiac sign is Aquarius\n"); }
	if ((day > 19 && month == 2) || (day < 21 && month == 3)) { printf("Your zodiac sign is Pisces\n"); }
	if ((day > 20 && month == 3) || (day < 21 && month == 4)) { printf("Your zodiac sign is Aries\n"); }
	if ((day > 20 && month == 4) || (day < 22 && month == 5)) { printf("Your zodiac sign is Taurus\n"); }
	if ((day > 21 && month == 5) || (day < 22 && month == 6)) { printf("Your zodiac sign is Gemini\n"); }
	if ((day > 21 && month == 6) || (day < 24 && month == 7)) { printf("Your zodiac sign is Cancer\n"); }
	if ((day > 23 && month == 7) || (day < 24 && month == 8)) { printf("Your zodiac sign is Leo\n"); }
	if ((day > 23 && month == 8) || (day < 24 && month == 9)) { printf("Your zodiac sign is Virgo\n"); }
	if ((day > 23 && month == 9) || (day < 24 && month == 10)) { printf("Your zodiac sign is Libra\n"); }
	if ((day > 23 && month == 10) || (day < 23 && month == 11)) { printf("Your zodiac sign is Scorpio\n"); }
	if ((day > 22 && month == 11) || (day < 22 && month == 12)) { printf("Your zodiac sign is Sagittarius\n"); }
	if ((day > 21 && month == 12) || (day < 21 && month == 1)) { printf("Your zodiac sign is Capricorn\n"); }

}
