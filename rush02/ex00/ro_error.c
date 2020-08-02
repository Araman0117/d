#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int ro_error(char **file)
{
	int		ofile;
	int		bukva;
	char	a;

	ofile = open(file[1], O_RDONLY);
	bukva = read(ofile, &a, 1);

	if (ofile < 0 || bukva < 0)
		return (0);
	else
		return (1);
}
