#include <iostream>

void print_256_colours_background()
{
    for (int i = 0; i < 256; i++)
    {
        if (i % 16 == 0 && i != 0)
            std::cout << std::endl;
        printf("\033[31;42;5;%dm %3d\033[m", i, i);
    }
}

// int interpolation_lineaire(int x, int y)
// {
// 	int res = 
// }

float convert(float nb)
{
    return ((nb / 255.0) * 5.0);
}

int main(void)
{
	// print_256_colours_background();
	int r = convert(111);
	std::cout << "r: " << r << std::endl;
	int g = convert(120);
	std::cout << "g: " << g << std::endl;
	int b = convert(144);
	std::cout << "b: " << b << std::endl;
	int ansi = 16.0 + 36.0 * r + 6.0 * g + b;
	std::cout << ansi << std::endl;
	printf("\033[48;5;%dmThis is red text\033[0m", ansi);
	//
	return (0);
}

