#include <stdio.h>
#include "ft_convert_base2.c"
#include "ft_convert_base.c"


int main()
{
	{
		printf("----ex04----\n");
		char *str;
		str = ft_convert_base("  \t \n 0", "0123456789", "0123456789");
		printf("-ACDADBG : %s\n", str);
		free(str);
		str = ft_convert_base("  \t \n -0", "0123456789", "0123456789");
		printf("-ACDADBG : %s\n", str);
		free(str);
		str = ft_convert_base("  \t \n 12", "0123456789", "0123456789");
		printf("-ACDADBG : %s\n", str);
		free(str);
		str = ft_convert_base("  \t \n 123", "0123456789", "0123456789");
		printf("-ACDADBG : %s\n", str);
		free(str);
		str = ft_convert_base("  \t \n -+-+-28909abc", "0123456789abcdef", "0123456789ABCDEFGHIJ");
		printf("-ACDADBG : %s\n", str);
		free(str);
		str = ft_convert_base(" --zzixzoz", "ozix", "POIUYTREWQ");
		printf("TWYO : %s\n", str);
		free(str);
		char base[6] = {-19, 66, -1, -8, -20, 0};
		str = ft_convert_base("++858a112", "845a", base);
		printf("B?? : %s\n", str);
		free(str);

		str = ft_convert_base("15858", "01234aa5678", "012345679ABCDEF");
		printf("null : %s\n", str);
		free(str);
		str = ft_convert_base("15858", "01278", "0");
		printf("null : %s\n", str);
		free(str);
		str = ft_convert_base("15858", "01-278", "019ABCDEF");
		printf("null : %s\n", str);
		free(str);
	}
}
