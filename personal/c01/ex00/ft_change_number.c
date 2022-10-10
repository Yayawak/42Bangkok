#include <stdio.h>

// ptr stores pointer of input number
void	ft_change_number(int *ptr, int new_val)
{
	printf("%s%d\n", "Value before modification is : ", *ptr);

	printf("%s%p\n", "Memory Address : ", ptr);

	*ptr = new_val;
	printf("%s%d\n", "Value after modification is : ", *ptr);

}
