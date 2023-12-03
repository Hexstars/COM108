#include <stdio.h>
int bai1(){
	
	int L, R, a, b;
	int i;
	int count=0;

	
	printf("\tNhap L: ");
	scanf("%d", &L);
	printf("\tNhap R: ");
	scanf("%d", &R);	
	printf("\tNhap a: ");
	scanf("%d", &a);
	printf("\tNhap b: ");
	scanf("%d", &b);
	
	for (i=L; i <= R; i++){
		
		if (i % a == 0){
		
			count++;
		}
	}
	printf("\tSo boi cua %d la: %d", a, count);
	count=0;
	for (i=L; i <= R; i++){
		
		if (i % b == 0){
		
			count++;
		}
	}
	printf("\tSo boi cua %d la: %d", b, count);
	count=0;
	for (i=L; i <= R; i++){
		
		if (i % a == 0 && i % b == 0){
		
			count++;
		}
	}
	printf("\tSo boi cua %d va %d la: %d",a, b, count);
	count=0;
	for (i=L; i <= R; i++){	
		if (i % a == 0 || i % b == 0){
		
			count++;
		}
	}
	printf("\tSo boi cua %d va %d la: %d",a, b, count);
	return 0;
}
