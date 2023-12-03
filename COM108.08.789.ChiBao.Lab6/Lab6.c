#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char tl[1];
	do{
			
		printf("\tDay la noi dung bai tap: \n");
		printf("\n\tThoat\n");
		switchcase();
		printf("\n\tContinue?(Y/N): ");
		scanf("%s", &tl);
		
	}
	while (strcmp(tl, "Y")== 0 || strcmp(tl, "y")== 0 );
		
		return 0;
}
int switchcase(){
	
	int bai;
	
	printf("\tNhap bai muon chon: ");
	scanf("%d", &bai);
	
	switch(bai){
		case 1:
			printf("\n\tDay la noi dung bai 1:\n");
			bai1();
			break;
		case 2:
			printf("\n\tDay la noi dung bai 2:\n");
			bai2();
			break;
		case 3:
			printf("\n\tDay la noi dung bai 3:\n");
			bai3();
			break;
		case 4:
			printf("\n\tDay la noi dung bai 4:\n");
			bai4();
			break;
		case 5:
			printf("\n\tDay la noi dung bai 5:\n");
			bai5();
			break;
		case 6:
			exit(0);
		default:
			printf("\n\tBai khong ton tai\n");				
	}
}
void tbt(int mang[], int phantu){
	
	int i;
	
	int tong = 0, bienDem = 0, tb = 0;

	for (i=0;i < phantu; i++ ){
	
		if (mang[i] % 3 == 0 && mang[i] % 5 == 0){
			
			tong += mang[i];
			bienDem++;	
		}
	}
	tb = tong/bienDem;

	printf("\tTrung binh tong la: %d\n", tb);

}
int bai1(){
	
	int i, phantu;
	
	
	printf("\n\tSo phan tu cua mang: ");
	scanf("%d", &phantu);
	
	int mang[phantu];
	
	for (i=0;i < phantu; i++ ){
		
		printf("\n\tNhap phan tu[%d]: ", i);	
		
		scanf("%d", &mang[i]);
		
	}
	
	tbt(mang, phantu);
	
	

	return 0;

}

int bai2(){
	
	int i, phantu;
	
	
	printf("\n\tSo phan tu cua mang: ");
	scanf("%d", &phantu);
	
	int mang[phantu];
	
	for (i=0;i < phantu; i++ ){
		
		printf("\n\tNhap phan tu[%d]: ", i);	
		
		scanf("%d", &mang[i]);
		
	}
	int min = mang[0];

	
	for (i=0; i < phantu; i++){
			
			if (mang[i] < min){
				
				min = mang[i];
			}
		}

	printf("\n\tGia tri nho nhat la: %d", min);
	
	int max = mang[0];	

	for (i=0; i < phantu; i++){
		
			if (mang[i] > max){
			
			max = mang[i];
			
			}
		}

	
	printf("\n\tGia tri lon nhat la: %d", max);
	
	
	return 0;	
}
void sapxep(int *mang, int phantu){
	int i, j;
  	for (i = 0; i < phantu - 1; i++) {
    	for (j = 0; j < phantu - i - 1; j++) {
      		if (mang[j] > mang[j + 1]) {
        		int tam = mang[j];
        		mang[j] = mang[j + 1];
        		mang[j + 1] = tam;
      }
    }
  }
}

int bai3(){
	int i, phantu;
	
	
	printf("\n\tSo phan tu cua mang: ");
	scanf("%d", &phantu);
	
	int mang[phantu];
	
	for (i=0;i < phantu; i++ ){
		
		printf("\n\tNhap phan tu mang[%d]: ", i);	
		
		scanf("%d", &mang[i]);
		
	}
		
	sapxep(mang, phantu);
	
	printf("\tMang sau khi sap xep: ");
	for (i = 0; i < phantu; i++) {
	printf("%d ", mang[i]);
	}
	  return 0;
}
void nhap(int arr[][100],int m,int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\n\tNhap phan tu thu [%d][%d] la: ",i,j);
			scanf("\t%d",&arr[i][j]);
		}
	}
}
void xuat(int arr[][100],int m,int n){
	printf("\n");
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t%d\t",arr[i][j]*arr[i][j]);
		}
	printf("\n");
   }
}
int bai4(){
    int n,m;
    int arr[n][m];
    printf("\tNhap so n hang: ");
	scanf("%d",&n);
    printf("\tNhap so m cot: ");
	scanf("%d",&m);
    nhap(arr,m,n);
    xuat(arr,m,n);
    return 0;
}
#include <stdio.h>

int bai5() {
    int n, m, i, j;


    printf("\tNhap so hang: ");
    scanf("%d", &n);
    printf("\tNhap so cot: ");
    scanf("%d", &m);


    int matrix[n][m];


    printf("\tNhap ma tran:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            printf("\tNhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\tCac vi tri va gia tri chua so le:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            if (matrix[i][j] % 2 != 0) {
                printf("\tVi tri [%d][%d]: %d\n", i, j, matrix[i][j]);
            }
        }
    }

    return 0;
}
