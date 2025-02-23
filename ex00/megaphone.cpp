#include <iostream>

static void megaphone(int argc, char **argv)
{
    int 	i;
	int		j;
	char	c;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i] != NULL)
        {
			j = 0;
			while (argv[i][j])
			{
				c = std::toupper(argv[i][j]);
				std::cout << c;
				j++;
			}
			if (i != argc - 1)
				std::cout << ' ';
            i++;
        }
		std::cout << std::endl;
    }
}

int main(int argc, char **argv)
{
    megaphone(argc, argv);
    return (0);
}
