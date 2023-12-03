#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	while (1){
		printf("\t1. Xuat ra tat ca cac so tu 1 den n\n");
		printf("\t2. Xuat ra tat ca cac so chia het cho 5 tu 1 den n\n");
		printf("\t3. Xuat ra tat ca cac so chia het cho 3 nhung khong chia het cho 2 tu 1 den n\n");
		printf("\t4. Xuat ra tat ca cac so nguyen to tu 1 den n\n");
		printf("\t5. Lap menu de chon cac bai tren\n");
		cau5();
		printf("\n");
	}
	return 0;
}
int cau5(){
	
	int bai;
	printf("\tChon bai: ");
	scanf("%d", &bai);
	
	switch(bai){
		case 1:
			printf("\n\tDay la noi ung cau 1: \n");
			bai1();
			break;
		case 2:
			printf("\n\tDay la noi ung cau 2: \n");
			bai2();	
			break;
		case 3:
			printf("\n\tDay la noi ung cau 3: \n");
			bai3();
			break;
		case 4:
			printf("\n\tDay la noi ung cau 4: \n");
			bai4();
			break;
		case 5:
			printf("\n\tDay la noi ung cau 5: \n");
		default:
			printf("\n\tBai khong ton tai");
	}
}

int bai1(){
	
	int so, i;
	printf("\n\tNhap n: ");
	scanf("%d", &so);
	
	for (i=1; i<= so; i++){
		printf("\t%d", i);
	}
}
int bai2(){
	
	int so, i;
	printf("\n\tNhap n: ");
	scanf("%d", &so);
	
	for (i=1; i<= so; i++){
		if(i % 5 == 0){
		printf("\t%d\t", i);
	}
	}	
}
int bai3(){
		int so, i;
	printf("\n\tNhap n: ");
	scanf("%d", &so);
	
	for (i=1; i<= so; i++){
		if(i % 3 == 0){
			if (i % 2 != 0){
				printf("\t%d\t", i);
			}
		}
	}	
}
int bai4(){
	

	int so;
	
	int i;
	
	int dem=0;
	
	printf("\tNhap so x: ");
	scanf("%d", &so);
	
	if (so == 1){
	
		printf("\t1 khong la so nguyen to");
	}
	else if (so <= 0){
	
		printf("\tLoi, phai nhap so nguyen duong");
	}
	else{
	for (i = 2; i <= so; i++){
	        if (i % 2 == 0){
	            dem++;
	            }
	}
	for (i = 2; i<=so; i++){
		
		if (dem == 0) {
			printf("\t%d\t", so);

}
}
}
	return 0;
}
