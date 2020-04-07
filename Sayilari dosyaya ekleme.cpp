#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	FILE *file;
	FILE *file2;
	int d,i,bayrak=0;
	
	
	if((file2 = fopen("sayilar2.txt","w"))==NULL){
		printf("dosya acma hatasý!");
	}
	if((file = fopen("sayilar.txt","r"))==NULL){
		printf("dosya okuma hatasý!");
	}

	while(!feof(file))
	{
		fscanf(file,"%d",&d);
		for(i=2;i<d/2;i++)
		{
			if(d%i==0){
				bayrak=1;
				break;
			}
			bayrak=0;
		}
		if(bayrak==0){
			printf("asal:%d\n",d);
			fprintf(file2,"%d\n",d);
			
		}
		
	}
	fclose(file);
	fclose(file2);
}
