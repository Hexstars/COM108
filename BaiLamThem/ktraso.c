#include <stdio.h>

int ktraso(){

	int a, b;
	int i;
	
	printf("Nhap a va b: ");
	scanf("%d %d",&a,&b);
	
	for (i=a;i<=b;i++){
		if (i % 2 != 0)
			printf("%d",i);
	}
	
	for (i=a;i<=b;i++){
		if (i%3==0 && i%2==0){
			printf("So %d deu chia het cho 2 va 3");
		}
	}
}
	
		
	
