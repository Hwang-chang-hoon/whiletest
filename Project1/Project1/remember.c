#include<stdio.h>

int main() {
	int a = 0, b = 0;
	while (a < 5) {
		while (b<a) {
			
			printf("o");
			b++;
		}
		b = 0;
		printf("*\n");
		a++;
		
	}

}