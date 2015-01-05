#include "Administrateur.h"
#include "Cours.h"
#include<string>
#include<list>
#include<iostream>


using namespace std;

			Administrateur::Administrateur(std::string id, std::string mdp)
			{
				Identifiant = id;
				Mdp = mdp;
			}

			Administrateur::~Administrateur()
			{
			}

            std::string Administrateur::getIdentifiant(){
            	return Identifiant;
			}
			
             void Administrateur::setIdentifiant(std::string id){
             	Identifiant = id;
			 }
			 
             std::string Administrateur::getMdp(){
             	return Mdp;
			 }
			 
             void Administrateur::setMdp(std::string mdp){
             	Mdp = mdp;
			 }
			 
             void Administrateur::ajouterCours(Cours cours){
          	 	liste_cours.push_back(cours);
		  }
