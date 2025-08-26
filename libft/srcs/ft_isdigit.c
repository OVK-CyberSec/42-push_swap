#include "../includes/libft.h"

int	ft_isdigit(int value)
{
	if (value > 47 && value < 58)
		return (value > 0);
	return (0);
}

/*
int main()
{
    char c;
    c='0';
    printf("Result when numeric character is passed: %d", isdigit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", isdigit(c));

    return 0;
}
*/
