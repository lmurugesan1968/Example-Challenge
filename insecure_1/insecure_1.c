#include <stdio.h>
#include <string.h>
void open_file(const char *file)
{
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

void main(void)
{
	char fn[10];
	clrscr();
	strcpy(fn,"test.txt");
	open_file(fn);
}
