#include <stdio.h>
#include <string.h>
void open_file(const char *file)
{
	FILE *f = fopen(file, "wx");
	if (f == NULL)
	{
		printf("Error - 1\n");  /* Error handling */
	}
	printf("Write any data to the file\n");  /* Write any data to the file */
	if (fclose(f) == EOF)
	{
		printf("Error - 2\n");  /* Error handling */
	}
}

void main(void)
{
	char fn[10];
	strcpy(fn,"test.txt");
	open_file(fn);
}