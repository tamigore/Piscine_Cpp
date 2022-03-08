#include <iostream>

char	*UperCase(char *str)
{
	for (int i = 0; str && str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	else
	{
		for (int i = 1; i < ac; i++)
			std::cout << UperCase(av[i]);
		std::cout << "\n";
	}
	return 0;
}