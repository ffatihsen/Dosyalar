#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int rastgele; 
	int d;
	int i =0;
	
	srand(time(NULL));
	FILE *file;
	if((file = fopen("sayilar.txt","w"))==NULL){
		printf("dosya acma hatasý!");
	}
	
	for (i;i<100;i++){
		rastgele=rand()%1000;
		fprintf(file,"%d\n",rastgele);
		
	}
	fclose(file);
}
