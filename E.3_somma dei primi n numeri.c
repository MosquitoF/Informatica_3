#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;//valore dato
	printf("\n inserire un valore \n");
	scanf("%d", & N);
	N=(N+1)*(N/2);
	printf("\n la somma dei primi N numeri e':  %d",N);
	return 0;
}
