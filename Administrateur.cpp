#include<string>
#include<list>
#include<iostream>
#include"Administrateur.h"
#include"Cours.h"


using namespace std;
std::string Identifiant;
std::string Mdp;
std::vector<Cours> liste_cours;


            std::string getIdentifiant(){
            	return Identifiant;
			}
			
             void setIdentifiant(std::string id){
             	Identifiant = id;
			 }
			 
             std::string getMdp(){
             	return Mdp;
			 }
			 
             void setMdp(std::string mdp){
             	Mdp = mdp;
			 }
			 
                void ajouterCours(Cours cours){
          	 	liste_cours.push_back(cours);
		  }
