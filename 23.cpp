#include<stdio.h>
#include<stdlib.h>
int main(void){	
		FILE *fptr;
		char C;
		fptr=fopen("data.txt","r");
		if(fptr!=NULL){
			while((C=getc(fptr))!=EOF){  
				printf("%c", C);
			}
			fclose(fptr);
		}
		else{
			printf("�ɮ׶}�ҥ���");
		}
		system("pause");
		return 0;
} 
