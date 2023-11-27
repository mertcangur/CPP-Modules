#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;

	if(argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
