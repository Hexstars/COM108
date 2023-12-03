#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	while(1){
		switchcase();
		printf("\n");
	}
	return 0;
}
int switchcase(){
	char bai;
	printf("\n\tNhap bai muon chon: ");
	scanf("%s", &bai);
	
	switch (bai){
		case '1':
			kiemtra1();
			break;
		case '2':
			kiemtra2();
			break;
		default:
     		printf("\tBai %s khong ton tai!\n", bai);
		}
		return 0;
}
int kiemtra1(){

	printf("\n\tDay la noi dung bai 1: \n");

	int so;
	printf("\n\tNhap so: ");
	scanf("%d", &so);
	
	if (so % 2 == 0){
		if (so % 5 == 0){
			printf("\n\t%d chia het cho 2 va chia het cho 5", so);
			}
		else{
			printf("\n\n\tLoi, %d chia het cho 2 nhung khong chia het cho 5", so);
		}
	}
	else {
		printf("\n\tLoi, %d chia het cho 5 nhung khong chia het cho 2", so);
	}
	return 0;
}
int kiemtra2(){
	
	printf("\n\tDay la noi dung bai 2: \n");
	
	float diemtoan;
	
	printf("\n\tNhap diem toan: ");
	scanf("%f", &diemtoan);
	
	if (diemtoan >= 0 && diemtoan <= 10){
	
		if (diemtoan >= 5){
			printf("\n\tBan da dau");
		}
		else{
			printf("\n\tBan da rot");
		}
		}
	else {
		printf("\n\tBan da nhap sai diem");
		
	}
	return 0;
}
