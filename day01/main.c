#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int main()
{
	int i, j, h, div, mod ;
	char *chaine;
	int list[4] = {2, 1, 5, 9};
	i = 2;
	j = 24;

	chaine = "everything is fine";
	
	printf("ex00/\nft_ft : \n");
	ft_ft(&i);
	printf("%d", i);

	printf("\nex02/\nft_swap :\n\n");
	printf("Before : j = %d i = %d\n\n", j, i);
	ft_swap(&i, &j);
	printf("After : j = %d, i = %d\n\n", j, i);

	printf("ex03/\nft_div_mod :\n\n");
	printf("Before : j = %d i = %d\n\n", j, i);
	ft_div_mod(j, i, &div, &mod);
	printf("After : mod = %d div = %d\n\n", mod, div);

	printf("ex04/\nft_ultimate_div_mod :\n\n");
	printf("Before : j = %d i = %d\n\n", j, i);
	ft_ultimate_div_mod(&j, &i);
	printf("After : j = %d i = %d\n\n", j, i);

	printf("ex05/\nft_putstr :\n\n");
	ft_putstr(chaine);
	printf("\n");

	printf("ex06/\nft_strlen :\n\n");
	printf("La chaine de character contient %d chracteres\n\n", ft_strlen(chaine));

	printf("ex07/\nft_rev_int_tab :\n\n");
	ft_rev_int_tab(list, 4);

	h = 0;
	printf("Chaine original = "); 
	while (h < 4) 
		printf("%d", list[h++]); 
	ft_rev_int_tab(list, 4);

	h = 0;
	printf("\nChaine modifier = "); 
	while (h < 4) 
		printf("%d", list[h++]);

	printf("\nex08/\nft_sort_int_tab :\n\n");
	printf("Chaine original = ");
	h = 0;
	while (h < 4) 
		printf("%d", list[h++]);

	printf("Chaine modifier = ");
	h = 0;
	while (h < 4) 
		printf("%d", list[h++]);
		ft_sort_int_tab(list, 4);

	return 0;
}