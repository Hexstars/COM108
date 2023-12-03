#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char tl[1];
	do{
			
		printf("\tDay la noi dung bai tap: \n");
		printf("\n\tBai 1: Tinh trung binh tong");
		printf("\n\tBai 2: Tim so nguyen to");
		printf("\n\tBai 3: Tim so chinh phuong");
		printf("\n\tBai 4: Lap menu");
		printf("\n\tBai 5: Thoat\n");
		switchcase();
		printf("\n\tContinue?(Y/N): ");
		scanf("%s", &tl);
		
	}
	while (strcmp(tl, "Y")== 0 || strcmp(tl, "y")== 0 );
		
		return 0;
}
int switchcase(){
	int bai;
	printf("\n\tNhap bai muon chon: ");
	scanf("%d", &bai);
	
	switch (bai){
		case '1':
			printf("\n\tDay la noi dung bai 1:\n");
			bai1();
			break;
		case '2':
			printf("\n\tDay la noi dung bai 2:\n");
			bai2();
			break;
		case '3':
			printf("\n\tDay la noi dung bai 3:\n");
			bai3();
			break;
		case '4':
			printf("Bai 4 la ve xay dung menu\n");
			break;
		case '5':
			exit(0);
		default:
			printf("\n\tBai khong ton tai\n");
	}
	return 0;
}

int bai1(){
	
		
	int min,max;
		
	printf("\tNhap min va max: ");
	scanf("%d %d", &min, &max);
	
	int i = min;
	float tong = 0, bienDem = 0, tb = 0;
	
	
	if (min >= max){
		printf("\tLoi, min lon hon hoac bang max\n");
		return 1;
	}


	while (i <= max){
		if (i % 2 == 0){
	 		tong += i;
	 		bienDem++;
	 }
	i++;
	}
	tb = tong/bienDem;


	printf("\tTrung binh tong la: %.1f\n", tb);
	return 0;
}
int bai2(){


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
	else {
		for (i = 2; i < so; i++){
			if (so % i == 0){
				dem++;
			}
		}
		if (dem == 0){
			printf("\t%d la so nguyen to", so);
		}
		else{
			printf("\t%d khong la so nguyen to", so);
		}
		}
	
	return 0;
}
int bai3(){
	
	int i, x,dem;
	
	printf("\n\tNhap x: ");
	scanf("%d", &x);
	
	for (i=1;i<=x;i++){
		if(i*i==x){
			dem++;
		}
	}
	if (dem != 0){
		printf("\n\t%d la so chinh phuong", x);
	}
	else{
		printf("\n\t%d khong la so chinh phuong", x);
	}
	return 0;
}

	


	
	
	
	
	

