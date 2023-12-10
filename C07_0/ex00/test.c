// C program to demonstrate strdup()
#include<stdio.h>
#include "ft_strdup.c"

int main()
{
	char source[] = "GeeksForGeeks";

	// A copy of source is created dynamically
	// and pointer to copy is returned.
	char* target = ft_strdup(source); 

	printf("%s", target);
	return 0;
}
