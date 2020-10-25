#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void toupper(char* x)
{
	while (*x != '\0')
	{
		if (*x >= 'a' && *x <= 'z')
		{
			*x = (char)(*x - ('a' - 'A'));
		}
		printf("%c", *x);
		x++;
	}
}
void tolower(char* x)
{
	while (*x != '\0')
	{
		if (*x >= 'A' && *x <= 'Z')
		{
			*x = (char)(*x - ('A' - 'a'));
		}
		printf("%c", *x);
		x++;
	}
}

void title(char* x)
{
	if (*x >= 'a' && *x <= 'z')
		*x = (char)(*x - ('a' - 'A'));
	printf("%c", *x);
	while (*x != '\0')
	{
		if (*x == ' ')
		{
			if (*(x + 1) >= 'a' && *(x + 1) <= 'z')
			{
				*(x + 1) = (char)(*(x + 1) - ('a' - 'A'));
			}
		}
		else if (*(x + 1) >= 'A' && *(x + 1) <= 'Z')
		{
			*(x + 1) = (char)(*(x + 1) - ('A' - 'a'));
		}
		printf("%c", *(x + 1));
		x++;
	}
}
int main()
{
	char str[100],*P;
	P = str;
	printf("Enter a string : ");
	scanf("%[^\n]", str);
	printf("Capital : ");
	toupper(P);
	printf("\nSmall : ");
	tolower(P);
	printf("\nTitle : ");
	title(P);
	return 0;
}