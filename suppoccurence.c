#include <stdio.h>
int main(){
	printf("suprimer les occurences \n");
	int tab[100]={};
	int i,j,d,x,N;
	int t[100]={};
	j=0;d=0;
	printf("entrez le nombres de N\n");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		printf("[%d]\n",i);
		printf("entrez les valeur :\n");
		scanf("%d",&tab[i]);
	}
	printf("entrer le nombre X\n");
	scanf("%d",&x);
	for(i=0;i<N;i++){
		if(tab[i]!=x){
			t[j]=tab[i];
			j++;
			}
		
		else{
			d+=1;
		}
	}printf("d=%d\n",d);
	for(j=0;j<N-d;j++){
		printf("les valeurs de %d\n",t[j]);
	}
	return 0;
}
