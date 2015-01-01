#include<string>
#include<list>
#include<iostream>
#include"Fichier.h"
#include<string>

using namespace std;
std::string Titre;
std::string Corps;


             void setCorps(std::string corps){
             	Corps = corps;
			 }
			 
             void setTitre(std::string titre){
             	Titre = titre;
			 }
			 
             std::string getTitre(){
             	return Titre;
			 }
			 
             std::string getCorps(){
             	return Corps;
			 }
			 
