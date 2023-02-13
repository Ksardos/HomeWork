#include <stdio.h>

int main() 
{
	long long int login, password;
	
	printf("Login:");
	scanf("%i",&login);
	
	printf("Password:");
	scanf("%i",&password);
	
	if (((login==123) && (password==321)) || ((login==345) && (password==543)))
	{
		printf("You are logged in");
	}
	else
	{
		printf("Login or password incorrect");
	}
}
