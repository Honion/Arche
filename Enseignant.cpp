#include "Enseignant.h"
#include<string>
#include<list>
#include<iostream>
#include "Cours.h"
#include "IPersonne.h"
#include <vector>



using namespace std;


             std::string Enseignant::getMdp(){
             	return Mdp;
			 }
			 
             void Enseignant::setMdp(std::string mdp){
             	Mdp = mdp;
			 }
			 
             std::vector<Cours> Enseignant::getCours(){
             		vector<Cours> ListeCours;
                  return ListeCours;
			 }
			 
             std::string Enseignant::getIdentifiant(){
             	return Identifiant;
			 }
			 
             void Enseignant::setIdentifiant(std::string id){
             	Identifiant = id;
			 }
			
