
#include <unistd.h>
#include <stdio.h>

int main()
{
	
	//~ int *t=NULL;
	
	
	//~ int l=42;
	//~ t=&l;
	int *t1=NULL;
	int **t = NULL;
	int ***t2 = NULL;	
	int ****t3 = NULL;
	int *****t4 = NULL;
	int ******t5 = NULL;
	int *******t6 = NULL;
	int ********t7 = NULL;
	int *********t8 = NULL;
	//int *********t9 = NULL;

	
	int l=42;
	t1=&l;
	t=&t1;
	t2=&t;
	t3=&t2;
	t4=&t3;
	t5=&t4;
	t6=&t5;
	t7=&t6;
	t8=&t7;
	//t9=&t8;
	printf("%d\n",*********(t8));

		
		return 0;
}
