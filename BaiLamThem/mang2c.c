#include <stdio.h>
//int h, c; //Con khong thi xoa dong nay va de la Nhap/Xuat(int h, int c, int a[h][c]){}
int mang2c(){

	int h, c;
	
	printf("\tNhap so hang: ");
	scanf("%d", &h);
	printf("\tNhap so cot: ");
	scanf("%d", &c);	
	int a[h][c];

	Nhap(h, c, a);	
	Xuat(h, c, a);
	Tim(h, c, a);
	return 0;
}
void Nhap(int h, int c, int a[h][c]){

	int i, j;
		
	for (i=0; i<h; i++){
		for (j=0; j<c; j++){
			printf("\tNhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void Xuat(int h, int c, int a[h][c]){
	
	int i, j;
	
	for (i=0; i<h; i++){
		for (j=0; j<c; j++){
			printf("\t%4d", a[i][j]);
		}
		printf("\n");
	}
}
void Tim(int h, int c, int a[h][c]){
	int i, j, so;
	int dem=0;
	printf("\tNhap so can tim: ");
	scanf("%d", &so);
	for (i=0; i<h; i++){
		for (j=0; j<c; j++){
			if ((a[i][j]) == so){
				
				printf("\tDa tim thay %d o vi tri: a[%d][%d]", so, i, j);
				
				dem++;
			}
			else if ((a[i][j]) != so){
				continue;
			}
		}
	}
	if (dem == 0){
		printf("\tKhong tim thay %d o bat ki vi tri nao", so);
	}
}
