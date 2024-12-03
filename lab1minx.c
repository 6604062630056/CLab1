#include<stdio.h>

int main() {
	int a;
	int b;
	scanf("%d %d",&a,&b);
	if (a>b) {
		printf("a more than b = %d",a-b);
	}
	else {
		printf("b more than a = %d",b-a);
	}
}
