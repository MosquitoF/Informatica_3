#include <stdio.h>
#include <stdlib.h>

/* Mosca Francesco  3°INA 14/11/2016 */

int main(int argc, char *argv[]) {
	int A;//Primo valore
	int B;//Secondo valore
	int C;//Variabile d'appoggio
	 printf("\n inserire il primo valore\n");
	 scanf("%d",& A);//Input del primo valore
	 printf("\n inserire il secondo valore\n");
	 scanf("%d",&B);//Input del secondo valore
	 C=B;
	 B=A;
	 A=C;
	 printf("\n i due valori sono:  %d  %d",A,B);
	return 0;
}
