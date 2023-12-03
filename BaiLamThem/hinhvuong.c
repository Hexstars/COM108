#include <stdio.h>
int kiemtrahinhvuong(){
	float a, b, dientich;
	
	printf("Nhap a(cm) va b(cm): ");
	scanf("%f %f", &a, &b);
	
	if (a >0 && b>0){
		printf("a va b deu duong\n");
		if (a==b){
			printf("a va b la canh hinh vuong\n");
			printf("Chu vi la: %.1f cm\n", (a + b)*2);
		}
		else{
			if (a < b){
				printf("Loi, a nho hon b\n");
			}
			else{
				printf("Loi, a lon hon b\n ");
			}
		}
	}
	else{
		if (a<0){
			printf("Loi, a la so am\n");
		}
		else {
			printf("Loi, b la so am\n");
		}
		}
	return 0;
}
