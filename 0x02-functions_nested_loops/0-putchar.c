#include <stdio.h>
#include "main.h"
/*print _putchar without using printf*/
int main () 
{
	char st[10] = "\_putchar\n";
	int n=0;
	while(st[n] != '\0')
       	{
		putchar(st[n]);
		n++;
	}
}
