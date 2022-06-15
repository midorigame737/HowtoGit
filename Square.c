#include<stdio.h>

void Square(int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("*");
		}
		printf("\n");
	}
}