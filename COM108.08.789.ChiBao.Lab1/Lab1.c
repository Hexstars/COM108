#include <stdio.h>
#include <string.h>
int main() {
	
	printf("Noi dung chuong trinh chinh: \n");
	Bai1();
	Bai2();
	Bai3();
	
	return 0;
}
int Bai1(){
	
	printf("\nDay la noi dung bai 1: \n");
	
	printf("Hello!\n");
	printf("FPT Polytechnic.\n");
	int namhientai, namsinh, tuoi;
	
	printf("1. Nhap nam hien tai: "); scanf("%d", &namhientai);
	printf("2. Nhap nam sinh: "); scanf("%d", &namsinh);
	
	if (namsinh > namhientai){
		printf("Loi, nam sinh phai nho hon hoac bang nam hien tai.\n");
		return 1;
	}
	
	tuoi = namhientai - namsinh;
	
	printf("3. Tuoi cua ban la: %d\n", tuoi);

	return 0;

}
int Bai2() {
    printf("\nDay la noi dung bai 2: \n");

    char mssv[7];
    char hovaten[30];
    int namsinh;
    float diemtb;

    printf("Nhap MSSV: ");
    scanf("%s", mssv);
    getchar(); // Loai bo newline character

    printf("Nhap ho va ten: ");
    fgets(hovaten, 30, stdin);

    printf("Nhap nam sinh: ");
    scanf(" %d", &namsinh);

    printf("Nhap diem trung binh: ");
    scanf(" %f", &diemtb);

    printf("1. MSSV: %s\n", mssv);
    printf("2. Ho va ten: %s", hovaten);
    printf("3. Nam sinh: %d\n", namsinh);
    printf("4. Diem trung binh: %.1f\n", diemtb);

    return 0;
}
int Bai3(){
	
	printf("\nDay la noi dung bai 3: \n");


	char mssv[7];
	char hovaten[30];
	float diemtoan;
	float diemly;
	float diemhoa;

	printf("Nhap MSSV: ");
	scanf("%s", mssv);
	getchar(); //Loai bo newline character

	printf("Nhap ho va ten: ");
	fgets(hovaten, 30, stdin);



	printf("Nhap diem Toan: ");
	scanf(" %f", &diemtoan);
	printf("Nhap diem Ly: ");
	scanf(" %f", &diemly);
	printf("Nhap diem Hoa: ");
	scanf(" %f", &diemhoa);
  
	float diemtrungbinh=(diemtoan*2+diemly+diemhoa)/3;


	printf("1. MSSV: %s\n", mssv);
	printf("2. Ho va ten: %s", hovaten);
	printf("3. Diem trung binh: %.1f", diemtrungbinh);

	return 0;

}
