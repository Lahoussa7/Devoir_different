#include <unistd.h>
#include <stdio.h>
int length (int nbr)
{
	int len,q;
	len=0;
	while (nbr!=0)
		{
			q = nbr / 10;
			nbr = q;
			len++;
		}

	printf("%d\n",len);
	return len+1;
}
void	traite_negative(int nbr,int len,int reste,char*tab)
{		int q=0;
		int	i=0; 
		nbr=nbr*(-1);
		while (nbr!=0)
		{
			q = nbr / 10;
			
			reste = nbr % 10;
			nbr= q;

			tab[i] = ('0' +reste);
				tab [len-1]= '-';

			i++;
		}
	//	write (1,tab,len);
}
void	inttochar()
{
		int nbr;
		int	q;
		int count;
		int reste;
		char tab[50];
		int i=0;
		int len;
		len=0;
		
		q = 0;
		reste =0;
		nbr = 159;
		len=length ( nbr);
		count = len-1;
		if (nbr < 0)
		{
		traite_negative(nbr,len,reste,tab);
		}
		else{
			while (nbr!=0)
			{
				q = nbr / 10;
			
				reste = nbr % 10;
				nbr= q;
				tab[i] = '0' +reste;
			
				i++;
			}
			while ( count >=0)
			{	
				write (1,tab,len);
				//printf("%d\n",count);
				count --;
			}
		}
}

int main()
{
	
		inttochar();
		
		return 0;
}
