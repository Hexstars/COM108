#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	

	while(1){
		bai5();
		printf("\n");
	}
	return 0;
}

	
int Bai1(){
	printf("\n\tDay la noi dung bai 1:\n");
	
	float diem;
	
	printf("\tNhap diem: ");
	scanf("%f", &diem);
	
	if (diem >=9){
		printf("\tHoc luc xuat sac\n");
	}
	else if (diem <9 && diem >=8){
		printf("\tHoc luc gioi\n");
	}
	else if (diem <8 && diem >=6.5){
		printf("\tHoc luc kha\n");
	}
	else if (diem <6.5 && diem >=5){
		printf("\tHoc luc trung binh\n");
	}
	else if (diem <5 && diem >=3.5){
		printf("\tHoc luc yeu\n");
	}
	else{
		printf("\tHoc luc kem\n");
	}
	return 0;
}
int Bai2(){
	printf("\n\tDay la noi dung bai 2 (Bai 2.1):\n");
	
	int a, b;
	float nghiem;
	
	printf("\tNhap a va b: ");
	scanf("%d %d", &a, &b);
	
	printf("\tVay phuong trinh la: %dx+%d = 0\n", a, b);
	
	if (a==0){
		if (b==0){
			printf("\tPhuong trinh co vo so nghiem\n");
		}
		else{
			printf("\tPhuong trinh vo nghiem\n");
		}
		}
	else {
		nghiem = -b*1.0/a;
		printf("\tPhuong trinh co nghiem x = %.1f\n", nghiem);
	}
	return 0;
}
int Bai3(){
	
	printf("\n\tDay la noi dung bai 3 (Bai 2.2):\n");
	
	float a, b, c;
	float x, delta;
	
	
	printf("\tNhap a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("\tVay phuong trinh la: %.1fx^2 %.1fx %.1f = 0\n", a, b, c);

	
	if (a==0){
		if (b==0){
			if (c==0){
				printf("\tPhuong trinh co vo so nghiem");
			}
			else {
				printf("\tPhuong trinh vo nghiem");
			}
		}
		else{
			printf("\tPhuong trinh co nghiem la x = %.1f", -c*1.0/b);
		}
	}
	else {
	
		delta = b*b-4*a*c;
		if (delta < 0){
 
			printf("\tPhuong trinh vo nghiem");
 
		}
 
		else if (delta == 0){
			printf("\tPhuong trinh co nghiem kep x1 = x2 = %.1f", -b*1.0/(2*a));	
		}
		else {
			printf("\tPhuong trinh co 2 nghiem phan biet:\n");
			printf("\t x1 = %.1f\n", (-b + sqrt(delta))/(2*a));
			printf("\t x2 = %.1f\n", (-b - sqrt(delta))/(2*a));
		}
		}
	return 0;	
	}
int Bai4(){
	
	printf("\n\tDay la noi dung bai 3 (Bai 4):\n");
	
	int sotien, kwh;

	
	printf("\tNhap so dien tieu thu: ");
	scanf("%d", &kwh);
	
	if (kwh >= 0 && kwh <= 50 ){
		
		sotien = 1.678*kwh;
		
	}
	else if (kwh >= 51 && kwh <= 100 ){
		
		sotien = ((50 * 1678) + ((kwh - 50)*1734));
		
	}
	else if (kwh >= 101 && kwh <= 200 ){
	
		sotien = ((50 * 1678) + (50*1734) + ((kwh - 100)*2014));

	}
	else if (kwh >= 201 && kwh <= 300 ){
		sotien = ((50 * 1678) + (50*1734) + (50*2014) + (kwh - 200)*2536);

	}
	else if (kwh >= 301 && kwh <= 400 ){
		sotien = ((50 * 1678) + (50*1734) + (50*2014) + (50*2536) + (kwh - 300)*2834);
	}
	else{
		sotien = ((50 * 1678) + (50*1734) + (50*2014) + (50*2536) + (50*2834) + (kwh - 400)*2927);
	}
	
	printf("\tSo tien la: %d dong \n", sotien);	
	return 0;
}
int bai5(){
	
	
	printf("\tDay la noi dung chuong trinh chinh:\n");
	
	printf("\n\tBai 1: Xay dung chuong trinh tinh hoc luc\n");
	printf("\tBai 2 (Bai 2.1): Xay dung chuong trinh giai phuong trinh bac 1\n");
	printf("\tBai 3 (Bai 2.2): Xay dung chuong trinh giai phuong trinh bac 2\n");
	printf("\tBai 4 (Bai 3): Xay dung chuong trinh tinh tien dien\n");
	printf("\tBai 5 (Bai 4): Xay dung menu chuong trinh\n");
	int bai;
	printf("\n\tNhap bai muon chon: ");
	scanf("%d", &bai);
	
	switch (bai){
		case 1:
			Bai1();
			break;
		case 2:
			Bai2();
			break;
		case 3:
			Bai3();
			break;
		case 4:
			Bai4();
			break;
		case 5:
			printf("\tBai 5(4) la ve switch/case");
			break;
		default:
     		printf("\n\tBai khong ton tai!\n");
		}
		return 0;
}

	
