#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	while (1){
		switchcase();
		printf("\n");
	}
	return 0;
}
int switchcase(){
	
	int bai;
	printf("Chon bai: ");
	scanf("%d", &bai);
	
	switch(bai){
		case 1:
			printf("\n\tDay la noi ung bai 1: \n");
			break;
		case 2:
			printf("\n\tDay la noi ung bai 2: \n");		
			break;
		case 3:
			printf("\n\tDay la noi ung bai 3: \n");
			break;
		case 4:
			printf("\n\tDay la noi ung bai 4: \n");
			break;
		case 5:
			printf("\n\tDay la noi ung bai 1: \n");
		default:
			printf("\n\tBai khong ton tai");
	}
}


