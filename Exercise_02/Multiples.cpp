
// But : Savoir si un entier est un multiple de 2,3, des deux, ou d'aucun.
// Auteur : Dhillon, Harjot Singh
// Date : 2021 - 09 - 09


#include <iostream>
void main()
{
	setlocale(LC_ALL, "");
	
	int a;
	

	std::cout << "Entrer un entier" << std::endl;
	std::cin >> a;

	
	
		if (a % 2== 0 && a % 3 == !0) // When A is divided by 0 with no remains and 3 is divided by 0 with remains
		{
			std::cout << a << " est seulement un multiple de 2 " << std::endl;
		}
	
		if (a % 3 == 0 && a % 2 == !0) // When A is divided by 0 with no remains and 2 is divided by zero with remains
		{
			std::cout << a << " est seulement un multiple de 3" << std::endl;
		}

		if (a % 2 == 0 && a % 3 == 0) // When there both divided with no remains
		{
			std::cout << a << " est à la fois multiple de 2 et de 3" << std::endl;
		}

		if (a % 2 == !0 && a % 3 == !0) // When there both divided with remains
		{
			std::cout << a << " n'est ni multiple de 2, ni de 3" << std::endl;
		}

		else
		{
			std::cout << "Veillez entrer un nombre different" << std::endl;
		}
	
	system("pause");
}

/*
Plan de test	/	Ecran

4				/	4 est seulement multiple de 2
67				/	67 n'est ni multiple de 2, ni de 3
99				/	99 est seulement un multiple de 3
987				/	987 est seulement un multiple de 3
3456			/	3456 est à la fois multiple de 2 et de 3

*/