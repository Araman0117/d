#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char str[] = "wjhflwhefiowusfnlabfkszrbfnlkauhwebdkqjhebdfnwlszjbsdk ,jkajedpfnwlsknfjlvszndfjlwsknzefdkjlwnszedfkj,nszlejdknfv wlsj.kzendfvowljskenrdfljw.ksrndvlj.skrndflvjs.krzndflj.skznrdflvj.ksnzdflvj.kwsnzdlfk.vnszldk.fnvlsj.kzdnvlsjk.fzdnvlsjzkdnfvljskndfhrnfouwksbrfk";
	char *strdup = ft_strdup(str);

	printf("%s\n", strdup);
	return 0;
}
