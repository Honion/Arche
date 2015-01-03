#include"Fichier.h"
#include<string>
#include<list>
#include<iostream>

using namespace std;



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
			 
