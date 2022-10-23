#include <stdio.h>

int main(){
	int x;
	printf("Enter your number: ");
	scanf("%d", &x);
	if (x % 3 == 0 && !(x % 5 == 0) ){
		printf("fizz");

	}else if (x % 5 == 0 && !(x % 3 == 0)){
		printf("buzz");

	}else if (x % 15 == 0){
		printf("fizzbuzz");
	}
	return 0;
}