#include <stdio.h>
#include <string.h>
void open_file(const char *file)
{
	FILE *f = fopen(file, "r");
	if (f != NULL)
	{
		printf("Error - 1 File exists\n");  /* Error handling - File exists */
	}
	else
	{
		if (fclose(f) == EOF)
		{
			printf("Error - 2\n");  /* Error handling */
		}
		f = fopen(file, "w");
		if (f == NULL)
		{
			printf("Error - 3\n");  /* Error handling */
		}
		printf("Write any data to the file\n");  /* Write any data to the file */
		if (fclose(f) == EOF)
		{
			printf("Error - 4\n");  /* Error handling */
		}
	}
}

void main(void)
{
	char fn[10];
	strcpy(fn,"test.txt");
	open_file(fn);
}
