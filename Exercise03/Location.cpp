// But: Creer un programme capable de calculer le cout pour louer une voiture
// Auteur: Dhillon, Harjot Singh
// Date : 2021-09-09

#include <iostream>
void main()
{
	float kmp; // Kilometrage Parcouru
	int ddv; // Duree du voyage

	int cdl; // Cout de location

	float cdv; // Consommation du vehicule

	float uld; // Un litre d'essence

	float ks; // Kilometre supplementaire

	float cd; // cout d'essence

	float total; // prix total

	float ka; // Kilometrage allouer


	float ppks; // Prix par km supplementaire



	std::cout << "Veuillez entrer le kilometrage parcouru" << std::endl;
	std::cin >> kmp;

	std::cout << "Veuillez entrer la duree du voyage ( en jours )" << std::endl;
	std::cin >> ddv;

	cdl = 45 * ddv; // Cout de location est 45 x la duree du voyage

	cdv = 100 / 7.6; // La consommation du vehicule est de 1 litre d'essence par 13.157 km.

	uld = 1.35; // Un littre d'essence coute 1.35

	ks = kmp+(ddv *-250); // Combien de km au dessus de 250

	ka = ddv * 250; // killometrage allouer est le nombre de jours x 250


	cd = (kmp/cdv) * uld; // Le cout d'essence est: [km parcouru / consamation du vehicule/km x 1.35$]

	ppks = ks * 0.05; // (KM au dessus de 250/jour) x 0.05 $

	total = cdl + cd; // Total = cout de location + cout d'essence

	if (kmp <= ka) // si le km allouer est plus ou egale que le km permis
	{
		std::cout << "Ca va vous couter : " << total << "$" << std::endl;
	}
	else // sinon
	{
		if (kmp > ka) // si le km allouer est moins que le km permis
		{
			
			total = cdl + cd + ppks; // total = cout de location + cout d'essence + les km non allouer x 0.05$

			std::cout << "Ca va vous couter : " << total << "$" << std::endl;


		}
	}

	system("pause");

}

/*
Plan de test	/	Ecran

KM / jours		/	Ecran

300 / 2			=	120.78$
870 / 3			=	230.26$
554 / 7			=	371.84$

*/