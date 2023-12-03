#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	
	char tl[1];
	do{
			
		printf("\tDay la noi dung bai tap: \n");
		printf("\n\tBai 1: Dem nguyen am va phu am");
		printf("\n\tBai 2: Dang nhap bang username va password");
		printf("\n\tBai 3: Sap xep chuoi theo chu cai");
		printf("\n\tBai 4: Chuyen doi so");
		printf("\n\tNhap so 5 de thoat\n");
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
	
	switch(bai){
		case 1:
			printf("----------------------------------------------------------------");
			printf("\n\tDay la noi dung bai 1:\n");
			bai1();
			break;
		case 2:
			printf("----------------------------------------------------------------");
			printf("\n\tDay la noi dung bai 2:\n");
			bai2();
			break;
		case 3:
			printf("----------------------------------------------------------------");
			printf("\n\tDay la noi dung bai 3:\n");
			bai3();
			break;
		case 4:
			printf("----------------------------------------------------------------");
			printf("\n\tDay la noi dung bai 4:\n");
			bai4();
			break;
		case 5:
			exit(0);
		default:
			printf("\n\tBai khong ton tai\n");				
	}
}
struct SinhVien{
		char mssv[30];
		char tenSV[30];
		char nganhHoc[30];
		float diemTB;
};
void nhapSV(struct SinhVien group[], int n){
	
	int i;
	
	for (i=0; i < n; i++){
	
		printf("\n\tNhap MSSV: ");
		scanf("%s", group[i].mssv);
		getchar();
		
		printf("\tNhap ten SV: ");
		gets(group[i].tenSV);

		printf("\tNhap nganh hoc: ");
		gets(group[i].nganhHoc);

		printf("\tNhap diem TB: ");
		scanf("%f", &group[i].diemTB);
			
	}
	printf("\n\tSV vua them la: ");
	printf("\n");
}
void xuatSV(struct SinhVien group[], int n){

	int i;
	
	for (i=0; i < n; i++){
	
		printf("\n\tMSSV: %s\n", group[i].mssv);
		printf("\tTen SV: %s\n", group[i].tenSV);
		printf("\tTen nganh hoc: %s\n", group[i].nganhHoc);
		printf("\tDiem TB: %.1f\n", group[i].diemTB);
	}
	printf("\n");
}
void swap(struct SinhVien *a, struct SinhVien *b) {
    struct SinhVien temp = *a;
    *a = *b;
    *b = temp;
}
void sudungswap(struct SinhVien group[], int n){
	
	int i, j;
	
	for (i=0; i < n-1; i++){
		for (j=i+1; j<n; j++){
			if (group[i].diemTB > group[j].diemTB){
				swap(&group[i], &group[j]);
			}
		}
	}
}
void timkiem(struct SinhVien group[], int n, char mssv[10]){
	
	int i;
	int count = 0;
	

	
	for (i=0; i < n; i++){
		
		if (strcmp(group[i].mssv, mssv) == 0){
			
			printf("\n\tDa tim thay SV:");
			printf("\n\tMSSV: %s\n", group[i].mssv);
			printf("\tTen SV: %s\n", group[i].tenSV);
			printf("\tTen nganh hoc: %s\n", group[i].nganhHoc);
			printf("\tDiem TB: %.1f\n", group[i].diemTB);
	
			count = 1;
	
		}
	}
	if (count == 0){
			
			printf("\tKhong tim thay thong tin SV!");
	}
	printf("----------------------------------------------------------------");
}
void hocbong(struct SinhVien group[], int n){
	
	int i;
	
	printf("\n\tCac sinh vien nhan hong bong la: ");
	for (i=0; i < n; i++){
		
		if (group[i].diemTB >= 8){
			
			printf("\n\tMSSV: %s\n", group[i].mssv);
			printf("\tTen SV: %s\n", group[i].tenSV);
			printf("\tTen nganh hoc: %s\n", group[i].nganhHoc);
			printf("\tDiem TB: %.1f\n", group[i].diemTB);
	}
		}
}
int bai1(){
	int i, n;


	printf("\n\tNhap so SV muon them: ");
	scanf("%d", &n);
	
	struct SinhVien group[n];
	
	
	nhapSV(group, n);
	xuatSV(group, n);	

	return 0;
}
int bai2(){
	int i, j, n;
	float svTemp = 0;

	printf("\n\tNhap so SV muon them: ");
	scanf("%d", &n);
	
	struct SinhVien group[n];
	
	nhapSV(group, n);
		
	sudungswap(group, n);

	xuatSV(group, n);
	return 0;
}
int bai3(){
	int n;
	
	char mssv[10];

	printf("\n\tNhap so SV muon them: ");
	scanf("%d", &n);
	
	struct SinhVien group[n];
	
	
	nhapSV(group, n);
	
	sudungswap(group, n);
	
	xuatSV(group, n);
	printf("\n\tNhap MSSV muon tim: ");
	scanf("%s", mssv);
	
	timkiem(group, n, mssv);
	
	return 0;
}
int bai4(){
	int n;
	
	char mssv[10];

	printf("\n\tNhap so SV muon them: ");
	scanf("%d", &n);
	
	struct SinhVien group[n];
	
	
	nhapSV(group, n);
	
	sudungswap(group, n);
	
	xuatSV(group, n);
	
	hocbong(group, n);
	
	return 0;
}
