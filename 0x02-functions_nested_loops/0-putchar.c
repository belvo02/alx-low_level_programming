/* print without printf */
#include<stdio.h>
#include<main.h>
main()
{
	char st[10] = "\_putchar\n";
	int n=0;
	while(st[n] != '\0') {
		putchar(st[n]);
		n++;
	}
}
