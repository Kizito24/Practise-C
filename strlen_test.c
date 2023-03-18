#include <stdio.h>

int main()
{
	char *word;

	printf("Enter a word\n");
	scanf("%s", word);
	word = malloc(sizeof(char * strlen(word)));
	printf("%s", word);

	return 0;
}
