#include <stdio.h>

int pot(int base, int exp);
int fat(int n);

int pot(int base, int exp) {
	int p = 1, i = 0;
	
	for(i; i < exp; i++)
		p = p * base;
	
	return p;
}

int fat(int n) {
	int i = 1,res = 1;

	if(n== 0)
		return 1;
	
	for(n; n > 1; n--)
		res = res * n;

	return res;
}

float calc_serie(int x, int n) { 
	float res = x;
	int i = 1;
	for(i; i <= n;i++)
		if(i % 2 == 0) {
			printf("Calc: %d, %f, %f\n", pot(x, 2*i), (float)fat(2*i+1), pot(x, 2*i) / (float)fat(2*i+1));
			res += pot(x, 2*i) / (float)fat(2*i+1);
			printf("res+: %f\n", res);
		} else {
			res -= pot(x, 2*i) / (float)fat(2*i+1);
			printf("res-: %f\n", res);
		}

	return res;
}

int main(void){
	int base, exp;
	
	printf("---Digite dois numeros---\n");

	scanf("%d %d", &base, &exp);

	printf("%d\n", pot(base, exp));
	
	printf("%d\n", fat(base));
	
	int n, x;

	printf("---Digite dois numeros---\n");

	scanf("%d %d", &x, &n);
	
	printf("%f\n", calc_serie(x, n));

	return 0;
}

