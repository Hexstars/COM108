#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	

	  	rac();

  return 0;
}

int cau1a() {
	
	int soa;	
	
  printf("Day la cau 1a:\n");

  printf("Nhap so a: ");
  scanf("%d", &soa);

  if (soa >= 0) {
    printf("%d la so duong\n", soa);
  } else {
    printf("%d la so am\n", soa);
  }

  return 0;
}

int cau1b() {
  printf("Day la cau 1b:\n");
	int soa;
  if (soa % 2 == 0) {
    printf("%d la so chan\n", soa);
  } else {
    printf("%d la so le\n", soa);
  }

  return 0;
}

int cau1c() {
  printf("Day la cau 1c:\n");
  int soa, sob;

  printf("Nhap so nguyen b: ");
  scanf("%d", &sob);

  if (soa % sob == 0) {
    printf("%d chia het cho %d", soa, sob);
  } else {
    printf("%d khong chia het cho %d", soa, sob);
  }

  return 0;
}
int cau1d(){
	int a;
	printf("Nhap so a: ");
	scanf("%d", &a);
	
	if (a % 2 ==0){
		printf("%d la so chan", a);
	}
	else{
		printf("%d la so le", a);
	}
	return 0;
}
int cau1e(){
	int a;
	
	printf("Nhap so a: ");
	scanf("%d", &a);
	
	if (a % 2 != 0){
			if (a % 3 == 0){
				printf("%d la so le va chia het cho 3", a);	
			}
			else {
				printf("Loi, %d la so le nhung khong chia het cho 3", a);
			}
	}
	else {
		printf("Loi, %d khong phai la so le", a);
	}
	return 0;
}
int cau2(){
		
	printf("\n\tDay la cau 1\n");

		
	int a, b;
	int i;
	
	printf("\tNhap a va b: ");
	scanf("%d %d",&a,&b);
	
	for (i=a;i<=b;i++){
		if(i % 2 != 0)
			printf("\n\t%d",i);
	}
}
int cau3(){
	
	printf("\n\tDay la cau 2\n");

	int a, b;
	int i;
	
	printf("\tNhap a va b: ");
	scanf("%d %d",&a,&b);
	
	for (i=a;i<=b;i++){
		if (i % 2 == 0 && i % 3 == 0)
			printf("\n\t%d",i);
		}
	return 0;
}
int cau4(){
	
	printf("\n\tDay la cau 3\n");

	int a, b;
	int i;
	
	printf("\tNhap a va b: ");
	scanf("%d %d",&a,&b);
	
	for (i=a;i<=b;i++){
		if (i < 0){
			if (i%2!=0)
				printf("%d \t", i);
		}
		else if (i >=0){
			if (i%2==0)
				printf("%d \t", i);
		}
}
	return 0;
}

