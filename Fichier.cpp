#include"Fichier.h"
#include<string>
#include<list>
#include<iostream>

using namespace std;

		Fichier::Fichier(std::string titre, std::string corps)
		{
			Titre = titre;
			Corps = corps;
		}

		Fichier::~Fichier()
		{
		}


		void Fichier::setCorps(std::string corps){
		Corps = corps;
		}
			 
		void Fichier::setTitre(std::string titre){
		Titre = titre;
		}
			 
		std::string Fichier::getTitre(){
		return Titre;
		}
			 
		std::string Fichier::getCorps(){
		return Corps;
		}
			 
