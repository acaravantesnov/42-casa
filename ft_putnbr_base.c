#include <stdio.h>

int nbase(char *base)
{
	int basse;
	int i;

	basse = 0;
	i = 0;
	while ((base[i] != '\0'))
	{
		if((base[i] == '+') || (base[i] == '-'))
			return (0);
		basse++;
		i++;
	}
	if((basse == 1) || (basse == 0))
		return (0);
	return (basse);
}

int ndigits(int nbr)
{
	int i;
	int digits;

	i = 0;
	digits = 0;
	while (nbr > 1)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if(nbase(base) != 0)
	{
		int digits;
		int basse;
		int i;
		int total;

		digits = ndigits(nbr);
		basse = nbase(base);
		i = digits;
		total = 0;
		while(i > 0)
		{

		}	
	}
}

int main(void){
	ft_putnbr_base(42,"poniguay");
	return (0);
}