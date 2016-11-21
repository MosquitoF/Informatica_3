#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
*Biglietto singolo Mirabilandia
*Mosca Francesco
*3INA
*versione 1.0
*21/11/2016
*/
int main(){
	float h;
	float eta;
	float pr;
	float dis;
	float ac;
	float mb;
	printf("La persona e' disabile?(si=0, no=1) \n");
	scanf("%f", & dis);
	printf("la persona vuole l'accesso a Mirabeach?(si=0, no=1) \n");
	scanf("%f", & mb);
	if(dis==0){
		if(mb==0){
			pr=7.50;
			printf("il prezzo e' %f", pr);
		    return(0);
		}else{
		    pr=0.00;
		    printf("il prezzo e' %f", pr);
		    return(0);
		}
	}
	printf("inserire l'eta' della persona \n");
	scanf("%f", & eta);
	printf("inserire l'altezza della persona \n");
	scanf("%f", & h);
	printf("la persona e' un accompagnatore di un disabile?(si=0, no=1) \n");
	scanf("%f", & ac);
	if(eta>60){
		pr=25.00;
	}else{
		if(h<=140){
			if(h>=100){
				pr=28.00;
		
			}else{
				pr=0.00;
			}
		}else{
			if(ac==0){
				pr=25.50;
			}else{
				pr=34.90;
			}
		}
	}
	if(mb==0){
		if(pr==34.90){
			pr=pr+9.50;
		}else{
			pr=pr+7.50;
		}
	}
	printf("il prezzo del biglietto e':  %f", pr);
}
