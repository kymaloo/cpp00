#include <iostream>

static void megaphone(int argc, char **argv)
{
    int 	    i;
	int		    j;
	std::string word;

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
				word += std::toupper(argv[i][j]);
				j++;
			}
            i++;
        }
		std::cout << word << std::endl;
    }
}

int main(int argc, char **argv)
{
    megaphone(argc, argv);
    return (0);
}
