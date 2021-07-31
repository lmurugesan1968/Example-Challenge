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
		f = fopen(file, "w");
		printf("Write any data to the file\n");  /* Write any data to the file */
	}
	fclose(f);
}

void main(void)
{
	char fn[10];
	clrscr();
	strcpy(fn,"test.txt");
	open_file(fn);
}
