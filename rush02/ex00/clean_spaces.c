#include <stdio.h>
#include <stdlib.h>

int clean_spaces(char *str)
{
	int		len;
	int 	k;
//	char	*buf;

	len = 0;
	k = 0;
	while (str[len] != '\0')
	{
		len++;
		if ((str[len] >= 'a' && str[len] <= 'z') || (str[len] >= 'A' && str[len] <= 'Z'))
		{
			k++;
			if(str[len] == ' ')
			{
				k++;
			len++;
			}
		len++;
		}
	}

//	buf = (char*)malloc(sizeof(*str) * len + 1);
//	while (k < len)
//	{
//		buf[k] = str[k];
//		k++;
//	}
//	buf[k + 1] = '\0';
		return (k);
}


int main(void)
{
	char *a;
	char *b;
	char *c;
	char *d;
	
	a = "Hello world";
	b = "    Hello world2";
	c = "    Hello world    ";
	d = "  Hello     world   ";
	
	printf("%d\n", clean_spaces(c));
}
