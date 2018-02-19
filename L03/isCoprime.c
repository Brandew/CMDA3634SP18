#include <stdio.h>

int main(){

	int a, b, gcd;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	gcd = hcf(a,b);
	if(gcd==1){
		printf("\n%d and %d are coprime.", a,b);
	}
	else{
		printf("\n%d and %d are not coprime.", a,b);
	}
	
}

int hcf(int c, int d){
	int e;
	while(1){
		e =c%d;
		if(e==0)
		return d;
		c = d;
		d = e; 
	}
}
