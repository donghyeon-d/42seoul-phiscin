#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("--ex04, ex05-- [you should put arguments when you run program]\n");
	struct s_stock_str *stock_str;

	stock_str = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock_str);
	for(int i=0;stock_str[i].str!=0;i++)
		free(stock_str[i].copy);
	free(stock_str);

	return (0);
}

