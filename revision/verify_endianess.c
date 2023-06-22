#include <stdio.h>

int main(void){
	int i;
	i = 10;

	printf("Int: %lu bytes\n", sizeof(i)); // sizeof return long int unsigned;
	printf("Char: %lu byte\n", sizeof(char)); // sizeof return long int unsigned;

	char *p = (char *)&i; // return first address of i word 
	// char have 1 byte, when we do casting i address to char * addres , will return first byte of i
	for(int k = 0; k < sizeof(int); k++) {
		printf("%.2x ", *p);
		p++;
	}

	printf("\n %lu \n", sizeof(p));

	return 0;
}
