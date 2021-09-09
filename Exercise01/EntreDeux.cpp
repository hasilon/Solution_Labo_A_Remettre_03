// But: Savoir l'ordre de 3 nombres entiers decider par l'utilisateur
// Auteur: Dhillon, Harjot Singh
// Date : 2021-09-07

#include <iostream>
void main()
{
	int a;
	int b;
	int c;

	std::cout << "entrer un premier entier" << std::endl;
	std::cin >> a;

	std::cout << "entrer un deuxieme entier" << std::endl;
	std::cin >> b;

	std::cout << "entrer un troisieme entier" << std::endl;
	std::cin >> c;

	if (c < a && c < b) // if C is bigger than A and B
	{
		std::cout << c << " vient avant " << a << " et " << b << std::endl;
	}
	if (c > a && c > b) // if C smaller than A and B
	{
		std::cout << c << " vient apres " << a << " et " << b << std::endl;
	}
	if (c > a && c < b) // if C is bigger than A and smaller than B
	{
		std::cout << c << " est entre " << a << " et " << b << std::endl;
	}
	if (c > b && c < a) // if C is bigger than B and smaller than A
	{
		std::cout << c << " est entre " << a << " et " << b << std::endl;
	}
	
	system("pause");

}

/*

Plan de teste	/	Ecran

1:2:3			=	3 vient apres 1 et 2

-1:-2:-3		=	-3 vient avant -1 et -2

78:34:64		=	64 est entre 34 et 78

89:54:12		=	12 vient avant 89 et 54

3457:9874:11000	=	11 000 vient apres ...

*/
