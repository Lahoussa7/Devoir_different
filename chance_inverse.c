#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int long1(int n);
int main(){
	
	int n=1230;
	int j=0;
	int l;
	int m=0;
	char ta[23];
	sprintf(ta,"%d",n);
	printf("%s\n",ta);
	j=strlen(ta);
	printf("%d\n",j);
	/*
	}*/
	//j=long1(n);
	//printf("%d\n",j);
	int*tab=malloc(sizeof(int)*j);
	
		do{
			for(int i=0;i<j;i++){
			l=n/10;
			tab[i]=n-(l*10);;
	         n=l;
		 
	    printf("%d\n",tab[i]);
	}
	}while(n!=0);
	int h=0;
	for(int i=0;i<j;i++){
		if(i<j/2){
			h+=tab[i];
		}
		if(i>=j/2){
			m+=tab[i];
		}
	}
		printf("%d  and %d",h,m);
		if(h==m){
			printf("yeah");
		}
		else{
			printf("no");
		}
		

	return 0;
}
/*int long1(int n){
	int j=0;
	while(n!=0){
		n/=10;
		j++;
		}
		return j;
}*/
