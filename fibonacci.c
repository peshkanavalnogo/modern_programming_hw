#include <stdio.h>
#include <stdbool.h>


long fib(long n){

	if (n == 1 || n == 2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main(){
	long n;
	printf("Enter a number: ");
	scanf("%ld", &n);
	printf("%ld",fib(n));
	return 0;
}