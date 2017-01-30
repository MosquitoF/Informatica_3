#include<stdlib.h>
#include<stdio.h>
int main(){
	int k;
	int num;
	int i;
	int t;
	int pos;
	int v[99];
	do{
		printf("inserire il numero di elementi \n");
		scanf("%d", & k);
	}while(k<0 || k>99);
	for(i=0;i<k;i++){
		printf("inserire un valore \n");
		scanf("%d", & v[i]);
	}
	printf("inserire il numero da cercare \n");
	scanf("%d", & num);
	i=0;
	while(i<k && t==0){
		if(v[i]==num){
			t=1;
			pos=i;
		}
		i++;
	}
	if(t==0){
		printf("num non trovato");
	}else{
		while(pos<k){
			v[pos]=v[pos+1];
			pos++;
		}
		for(i=0;i<(k-1);i++){
			printf("%d", v[i]);
		}
	}
}
