#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	int phantu;
	
	int n = 0, p = 0, i = 0;

	printf("\n\tSo phan tu cua chuoi: ");
	scanf("%d", &phantu);
	getchar();
	char s[phantu];
	
	printf("\n\tNhap chuoi: ");
	gets(s);
	
	printf("\n\tChuoi la: %s", s);
	
	while(s[i] != '\0') {	
		if(s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='a' || s[i]=='i' || 
		   s[i]=='E' || s[i]=='U' || s[i]=='O' || s[i]=='A' || s[i]=='I'){
			n++;
		}
		else {
			p++;
		}
		i++;
	}
	printf("\n\tChuoi '%s' co %d nguyen am va %d phu am", s, n, p);
	return 0;
}
int bai2(){
	char user[100];
	int pass;
	printf("\tUsername: admin  va password: 1234567\n");
	printf("\tNhap username: ");
	scanf("%s",&user);
	printf("\tNhap password: ");
	scanf("%d",&pass);
	char userSys[] = "admin";
    int passSys = 1234567;
    if(strcmp(user,userSys)==0 && pass==passSys){
        printf("\n\tDang nhap thanh cong\n");
    }else{
        printf("\n\tDang nhap that bai\n");
    }
    return 0;
}

void sapXepChuoi(char arr[][50], int n) {
    int i, j;
    char temp[50];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int bai3(){
    char chuoi[5][50];
    int i;


    for (i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        scanf("%s", chuoi[i]);
    }


    sapXepChuoi(chuoi, 5);


    printf("\nChuoi da sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", chuoi[i]);
    }

    return 0;
}

int bai4(){
	int a[10],n,i;  

	printf("\n\tNhap mot so bat ky: ");  
	scanf("%d",&n);  
	for(i=0;n>0;i++) {  
		a[i]=n%2;  
		n=n/2;  
	}  
	printf("\n\tDang nhi phan cua so vua nhap la = ");  
	for(i=i-1;i>=0;i--){  
	
		printf("%d",a[i]);  
	
	}  
	
	return 0;
}  
