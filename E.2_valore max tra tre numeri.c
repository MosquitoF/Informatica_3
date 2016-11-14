#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N1;//primo valore
	int N2;//secondo valore
	int N3;//terzo valore
	int Max;//variabile contenente il valore massimo
	printf("\n Inserire il primo valore\n");
	scanf("%d", &  N1);
	printf("\n Inserire il secondo valore\n");
	scanf("%d", &  N2);
	printf("\n Inserire il terzo valore\n");
	scanf("%d", &  N3);
	if(N1>N2){
		Max=N1;
	}else{
		Max=N2;
	}
	if(N3>Max){
		Max=N3;
	}
	printf("\n il valore massimo tra i tre dati e':  %d",  Max);
	return 0;
}
