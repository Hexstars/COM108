#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char tl[1];
	do{
			
		printf("\tDay la noi dung bai tap: \n");
		printf("\n\tBai 1: Tim max");
		printf("\n\tBai 2: Kiem tra nam");
		printf("\n\tBai 3: Hoan vi");
		printf("\n\tBai 4: Kiem tra tam giac");
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
	
	printf("\tNhap bai muon chon:");
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
			exit(0);
		default:
			printf("\n\tBai khong ton tai\n");				
	}
}
int bai1(){

	
	int so[3];
	int i;
	int max = 0;
	
	printf("Nhap a b c: ");
	for (i = 0; i < 3; i++) {
  		scanf("%d", &so[i]);
}
	
	for (i = 0; i < 3; i++){
		if (so[i]> max){
			max = so[i];
		}
	}
	
	printf("So lon nhat la: %d\n", max);
	
	return 0;
	
}
int bai2(){
	
	int nam;
	
	printf("\n\tNhap nam: ");
	scanf("%d", &nam);
	
	if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 !=0){
		
		printf("\n\tNam %d la nam nhuan", nam);
	}
	else{

		printf("\n\tNam %d khong phai la nam nhuan\n", nam);
		
	}
	return 0;
}
int hoanvi(int *a, int *b){
	
	int tamthoi;

	tamthoi = *a;
	
	*a = *b;
	
	*b = tamthoi;
	
}
int bai3(){

		
	int a, b;

	
	printf("\n\tNhap a va b: ");
	scanf("%d %d", &a, &b);
	
	printf("\n\ta va b ban dau la: %d va %d", a, b);
	
	hoanvi(&a, &b);
	
	printf("\n\tGia tri a va b sau hoan vi la: %d va %d", a, b);
	
	return 0;
}
int xettamgiac(int a, int b, int c){
  // Kiem tra xem 3 so có phai la so nguyen duong hay khong
  if (a <= 0 || b <= 0 || c <= 0) {
    return 0;
  }

  // Kiem tra tong caa hai canh bat ki co lon hon canh con lai hay khong
  if (a + b <= c || a + c <= b || b + c <= a) {
    return 0;
  }

  // xet tam giac
  int type = 0;
  if (a == b) {
    if (a == c) {
      type = 1; // Tam giac deu
    } else {
      type = 2; // Tam giac can
    }
  } else if (a == c) {
    type = 2; // Tam giac can
  } else if (b == c) {
    type = 2; // Tam giac can
  } else {
  		if (a * a + b * b == c * c) {
    	type = 3; // Tam giac vuong
  		}
  		else {
  		type = 4;	
		  }
	}

  return type;
}
int bai4(){
	int a, b, c;


  printf("\tNhap a: ");
  scanf("%d", &a);
  printf("\tNhap b: ");
  scanf("%d", &b);
  printf("\tNhap c: ");
  scanf("%d", &c);

  // Kiem tra 3 so
  int type = xettamgiac(a, b, c);

  // In ket qua
  if (type == 0) {
    printf("3 so vua nhap khong phai 3 canh cua mot tam giac");
  } else {
    switch (type) {
      case 1:
        printf("\tDay la 3 canh cua tam giac deu");
        break;
      case 2:
        printf("\tDay la 3 canh cua tam giac can");
        break;
      case 3:
        printf("\tDay la 3 canh cua tam giac vuong");
        break;
      case 4:
      	printf("\tDay la 3 canh cua tam giac thuong");
      	break;
    }
  }

  return 0;
}
