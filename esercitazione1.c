#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	int n1;
	int n2;
	int num;
	int k;
	int i;
	int v[1000];
	do{
		printf("inserire un valore positivo dispari e minore di 1000 \n");
		scanf("%d", & n2);
	}while(n2%2==0 || n2>1000 ||n2<0);
	do{
		printf("inserire un valore positivo minore di quello precedente \n");
		scanf("%d", & n1);
	}while(n1<0 || n1>n2);
	do{
		printf("inserire un valore compreso tra i primi due \n");
		scanf("%d", & k);
	}while(k<n1 || k>n2);
	printf("inserire il valore da moltiplicare agli elementi \n");
	scanf("%d", & num);
	for(i=0;i<k;i++){
		printf("inserire un valore \n");
		scanf("%d", & v[i]);
		v[i]=v[i]*num;
	}
	for(i=0;i<k;i++){
		printf("| %d", v[i]);
	}
	 
}
