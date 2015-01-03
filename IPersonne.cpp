#include "IPersonne.h"
#include<string>
#include<list>
#include<iostream>
#include<vector>

//#include "Eleve.h"
#include "Enseignant.h"
//#include "Administrateur.h"
//#include "Cours.h"

using namespace std;

		 std::string IPersonne::getIdentifiant(){
		 	return Identifiant;
		 }
		 
    	void IPersonne::setIdentifiant(std::string id){
    		Identifiant = id;
		}
		
        std::string IPersonne::getMdp(){
        	return Mdp;
		}
		
        void IPersonne::setMdp(std::string mdp){
        	Mdp = mdp;
		}
