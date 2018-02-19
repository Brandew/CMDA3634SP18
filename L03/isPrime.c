#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	for(int i = 2; i < a; i++){
		if (a%i == 0 && i != a){
			return printf("\n%d is not prime.", a);
		}
		
			
	}
	return printf("\n%d is prime.",a);
}
