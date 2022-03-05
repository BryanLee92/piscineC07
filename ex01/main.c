#include <stdio.h>
int *ft_range(int min, int max);

int main(void)
{		
	int i = 0;
	int *p;
	int *a;
	int *b;

	//Print array
	p = ft_range(5, 10);
	a = ft_range(5, 5);
	b = ft_range(10, 4);

	while (i < 5)
	{
		printf("%d\n", p[i]);
		i++;
	}

	//when min and max same, check pointer is null
	if (!(a))
		printf("%s", "Hll\n"); 
	
	//when min less than max, check pointer is null
	if (!(b))
		printf("%s", "Do your math bro Min cant be more than math");
	
	return (0);
}
