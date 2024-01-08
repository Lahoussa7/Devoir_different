#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int puiss(int bas,int haut);
int viirgule(char*date);
int chartoint(char*date);
void separviirg(char*date,char**sep,int vi);
double resultat(char*date,char**chaine);
int main(){
	char*date="23.7";
	;
	int vi=viirgule(date);
	char**sep;
	sep=malloc(4);
	for(int j=0;j<4;j++){
		sep[j]=malloc(10);
	}

	separviirg(date,sep,vi);
	printf("%s\n",sep[0]);
	printf("%s\n",sep[1]);
	//int chartoint(char*date);
	double res=resultat(date,sep);
	//printf("%f",res);
	return 0;
}
int viirgule(char*date){
	int viir;
	viir=0;
	for(int i=0;i<strlen(date);i++){
		if(date[i]=='.'){
			return i;
		}
	}	
			
   return viir;
}
void separviirg(char*date,char**sep,int vi){
	
	
	for(int i=0;i<vi;i++){
		sep[0][i]=date[i];
	}
	for(int j=vi+1,i=0;j<strlen(date);j++,i++){
		sep[1][i]=date[j];
	}
	return ;
}
		
int chartoint(char*date){
	int bas;
	bas=10;
	int somme;
	somme=0;
	for(int i=0;i<strlen(date);i++){
		somme+=((date[i]-'0')*(puiss(bas,(strlen(date)-i-1))));
		
	}
	return somme;
}
int puiss(int bas,int haut){
	int som;
	som=1;
	for(int i=1;i<=haut;i++){
		som*=bas;
	}
	return som;
}
double resultat(char*date,char**chaine){
	double som,sum;
	som=0;
	int bas;
	bas=10;
	for(int i=0;i<strlen(chaine[0]);i++){
		som=chartoint(*chaine);
	}
	for(int j=0;j<strlen(chaine[1]);j++){
	sum=(chartoint(*(chaine+1))/(pow(bas,strlen(*(chaine+1)))));	
    }
    som=som+sum;
    printf("%f",som);
    	return som;
    	
  }	
	
