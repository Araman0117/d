#include <unistd.h>
#include "ro_error.c"
#include "triplet.c"

int ft_input(int count, char **arg)
{
	int i;
	
	i = 0;
	
		if (count == 1 || count > 3 )
		{
			write(1, "Error", 5);
			return (0);
		}

		if (count == 2 && (!(arg[1][0] >= '0' && arg[1][0] <= '9')))
			{
				write(1, "Error", 5);
				return (0);
			}

		if (count == 3 && (!(arg[2][0] >= '0' && arg[2][0] <= '9')))
			{
//				i = ro_error(arg);
//				printf("%d\n", i);
//				{
//					write(1, "Error", 5);
//					return (0);
//				}
//				else
					write(1, "Error", 5);
					return (0);
			}

	return (1);
}


int main (int argc, char **argv)
{
	if(ft_input(argc, argv) > 0)
	{
		write(1, "YES", 3);
	}
	printf("\n");
	printf("%d\n", triplet(argv[1]));
}
