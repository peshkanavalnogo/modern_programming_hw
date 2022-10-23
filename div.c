#include <stdio.h>

long k, n, d = 0;
void div(){
	while (n >= d){
		n -= d;
		k++;
	}
}

int main(){
	printf("Enter a number: ");
	scanf("%ld", &n);
	printf("Enter divider: ");
	scanf("%ld", &d);
	div();
	printf("Number of times: %ld\n", k);
	printf("Remainder: %ld\n", n);
}