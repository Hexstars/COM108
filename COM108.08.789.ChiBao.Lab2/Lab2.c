#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("Noi dung chuong trinh chinh: \n");
	Bai1();
	Bai2();
	Bai3();
	Bai4();
	Bai5();
	return 0;
}
int Bai1(){
	
	printf("Day la noi dung bai 1: \n");

	float sothunhat, sothuhai, tong, hieu;
	
	printf("Nhap so thu nhat: ");
	scanf("%f",&sothunhat);
	printf("Nhap so thu hai: ");
	scanf("%f",&sothuhai);
	
	tong = sothunhat + sothuhai;
	printf("Tong cua hai so la: %.1f\n", tong);
	
	if (sothunhat < sothuhai){
		printf("!!!!!Loi, so bi tru nho hon so tru, thu lai!!!!!\n");
		return 1;
	}
	hieu = sothunhat - sothuhai;
	
	
	printf("Hieu cua hai so la: %.1f\n", hieu);

	return 0;
}
int Bai2(){
	
	float chieudai, chieurong, chuvi, dientich;
	printf("Day la noi dung bai 2: \n");
	
	printf("Nhap chieu dai(cm): ");
	scanf("%f", &chieudai);

	printf("Nhap chieu rong(cm): ");
	scanf("%f", &chieurong);
	
	if (chieudai <= 0 || chieurong <=0){
		
		printf("Loi, chieu dai(cm) va chieu rong(cm) phai la so duong");
		return 1;
	}
	
	chuvi = (chieudai + chieurong)*2;
	dientich = chieudai * chieurong;
	
	printf("Chu vi hinh chu nhat la: %.1f cm\n", chuvi);
	printf("Dien tich hinh chu nhat la: %.1f cm^2\n", dientich);
	
	return 0;
}
int Bai3(){
	
	printf("Day la noi dung bai 3: \n");
	float bankinh, chuvi, dientich;
	const float pi = 3.14;
	
	printf("Nhap ban kinh duong tron(cm): ");
	scanf("%f", &bankinh	);
	
	chuvi = 2*pi*bankinh;
	dientich = pi*(bankinh*bankinh);
	
	printf("Chu vi hinh tron la: %.1f cm\n", chuvi);
	printf("Dien tich hinh tron la: %.1f cm^2\n", dientich);
	return 0;
}
int Bai4(){
	printf("Day la noi dung bai 4: \n");
	
	float diemtoan, diemly, diemhoa, diemtb;
	
	printf("Nhap diem mon Toan: ");
	scanf("%f", &diemtoan);
	
	printf("Nhap diem mon Ly: ");
	scanf("%f", &diemly);
	
	printf("Nhap diem mon Hoa: ");
	scanf("%f", &diemhoa);
	
	diemtb = (diemtoan*3+diemly*2+diemhoa)/3;
	
	printf("Diem trung binh la: %.1f\n", diemtb);
	
	return 0;
}
int Bai5(){
	printf("Day la noi dung bai 5:\n");
	
	int a, b;
	float nghiem;
	
	printf("Nhap a va b: ");
	scanf("%d %d", &a, &b);
	
	printf("Vay phuong trinh la: %dx+%d = 0\n", a, b);
	
	if (a==0){
		if (b==0){
			printf("Phuong trinh co vo so nghiem\n");
		}
		else{
			printf("Phuong trinh vo nghiem\n");
		}
		}
	else {
		nghiem = -b*1.0/a;
		printf("Phuong trinh co nghiem x = %.2f\n", nghiem);
	}
	return 0;
}
