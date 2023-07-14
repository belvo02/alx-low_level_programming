#include <stdio.h>
/*various type sizes*/

int main(void)
{

	int i;
	long int i_l;
	long long int i_l_l;
	double d;
	char c;
	float f;
	
	printf("Size of a char: %lu \n" , (unsigned long) sizeof (c));
	printf("Size of an int: %lu \n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu \n", (unsigned long long) sizeof(i_l));
	printf("Size of a long long int: %lu \n", (unsigned long long) sizeof(i_l_l));
	printf("Size of a float is: %lu .\n", (unsigned long) sizeof (f));
	
	return (0);

}
