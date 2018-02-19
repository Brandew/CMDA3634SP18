#include <stdio.h>
int main() {

	int a, b, c, gcd;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	for(c=1; c <= a && c <= b; ++c){
		if(a%c==0 && b%c==0)
			gcd = c;
	}
	printf("The GCD of %d and %d is %d", a,b,gcd);
	return 0;



}
