
#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char **av)
{
	int	i(1);
	size_t	j;

	if (ac >= 2)
	{
		std::string str;
		while (i < ac)
		{
			std::string word = av[i];
			j = -1;
			while (++j < word.size())
				std::cout << (char)std::toupper(word[j]);
			if (i < ac - 1)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
