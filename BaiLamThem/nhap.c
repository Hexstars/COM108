#include <stdio.h>
#define slsv 2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct sinhVien{
	char mssv[50];
	char ten[50];
	float diem;
}sv1,sv2;  			//co the khai bao day hoac trong ham main
int rac(int argc, char** argv) {
	int a;
	int i;
	struct sinhVien dssv[slsv];
	//nhap
	for(i=0; i<slsv; i++){
		printf("\tMSSV %d: ",i+1);scanf("%s",dssv[i].mssv);
		fflush(stdin);
		printf("\tTen %d: ",i+1);gets(dssv[i].ten);
		printf("\tDiem %d: ",i+1);scanf("%f",&dssv[i].diem);
		printf("\n");
	}
	printf("\nXuat thong tin sinh vien:\n");
		printf("%-10s%-10s%-10s%-10s\n", "STT", "MSSV", "Ten", "Diem");
	//xuat
	for(i=0;i<slsv;i++){
		printf("%-10d%-10s%-10s%-10.2f\n", i + 1, dssv[i].mssv, dssv[i].ten, dssv[i].diem);
	}
	return 0;
}
