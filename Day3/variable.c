/* Understanding the variable concept */

#include <stdio.h>

int main(void)
{
	int num = 4; /*An integer */
	float no = 6.98; /* contains decimal pointt */ 
	char letter = 'H'; /* a letter */
	char *word = "Pot"; /* creates a pointer to a string literal
			       cannot be modified*/
	char Mystring[] = "cat"; /*an array. Can be modified*/

	printf("%d\n", num);
	printf("%.2f\n", no); /* prints out two decimal points */
	putchar(letter);
	putchar('\n');
	printf("%c\n", letter);
	printf("%s\n", word);
	printf("%s", Mystring);

	return (0);
}
