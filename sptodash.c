#include <stdio.h>
void sp_to_dash(const char *str);

int main(void)
{
	char name[40];

	printf("Enter your full name in lowercase\n");
	scanf("%s", name);

	sp_to_dash(name);

	return 0;
}
void sp_to_dash(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i]== ' ')
			printf("%c", "-");
		else
			printf("%c", str[i]);
	}
}
