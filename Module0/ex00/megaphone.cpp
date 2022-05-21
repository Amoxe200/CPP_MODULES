#include <iostream>

int ft_islower(int a)
{
	if (a >= 'a'  && a <= 'z')
		return (1);
	return (0);
}

int ft_toupper(int a)
{
	if (ft_islower(a))
		return (a - 32);
	return (a);
}

int ft_strlen(char *str)
{
	int i;
	i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*upper(char *str, int len)
{
	char *up;
	int i;
	
	i = 0;
	up = new char[len + 1];
	while (i < len)
	{
		up[i] = ft_toupper(str[i]);
		i++;
	}
	up[i] = '\0';
	return(up);
}

int main(int ac, char **av)
{
	int len;
	char *newStr;
	int		i;

	i = 1;
	while (i < ac)
	{
		len = 0;
		len = ft_strlen(av[i]);	
		newStr = upper(av[i], len);
		std::cout<<newStr;
		delete[] newStr;
		i++;
	}
	std::cout<<'\n';
    return (0);
}