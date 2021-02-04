#include "../ft_printf.h"
#include <stdio.h>
#include <fcntl.h>

#define MAIN(string)		"\033[1m\033[38;5;199m" string "\033[0m"
#define MAIN_1(string)		"\033[35m" string "\033[0m"
#define HEADER_1(string)	"\033[38;5;43m" string "\033[0m"
#define HEADER_2(string)	"\033[38;5;75m" string "\033[0m"
#define HIGHLIGHT(string)	"\033[38;5;191m" string "\033[0m"


int		main(void)
{
	printf(MAIN("=== • Program started • ===\n"));

//	int number = 4;

	printf(MAIN_1("=== empty file ===\n"));
	//printf(HEADER_2("• Line n.%d ") HEADER_1("[RET=%d]: ") "\"%s\"\n", i, ret, line);

//	ft_printf("ABCabc123\n");
	ft_printf("Ola %c Hello", 'B');
//	ft_printf("%d\n", number);

	printf(MAIN("=== • Program ended • ===\n\n"));
}
