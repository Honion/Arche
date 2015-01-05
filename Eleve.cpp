#include "Eleve.h"
#include<string>
#include<list>
#include<iostream>
#include "Cours.h"
#include "Note.h"

using namespace std;

		Eleve::Eleve(std::string id, std::string mdp)
		{
			Identifiant = id;
			Mdp = mdp;
		}

		Eleve::~Eleve()
		{
		}

  		vector<Cours> Eleve::getCoursOuvert()
  		{             
                vector<Cours> a;
                return a;
 		 }
  
  		 void Eleve::connexion(bool a){
          	
		  }
		 /*
          std::vector<Cours> Eleve::identifierCoursOuvert(std::string cours_ouvert){
          	
		  }
		  
          std::vector<Cours> Eleve::identifierCours(std::string cours){
          	
		  }
		  
          Cours Eleve::getCours(std::string cours){
          	
		  }
		  */
		  /*
          std::vector<Cours> Eleve::getCoursOuvert(){
          	vector<Cours> ListeCoursOuvert;
                  return ListeCoursOuvert;
          }
		  */
		  
		     std::string Eleve::getMdp(){
		     	return Mdp;
			 }
		  
          void Eleve::setMdp(std::string mdp){
          	Mdp = mdp;
		  }
		  
          std::string Eleve::getIdentifiant(){
          	return Identifiant;
		  }
		  
          void Eleve::setIdentifiant(std::string id){
          	Identifiant = id;
		  }
		  
          void Eleve::ajouterCours(Cours cours){
          	 liste_cours.push_back(cours);
		  }
		  
          void Eleve::ajouterCoursOuvert(Cours cours){
          	liste_cours_ouvert.push_back(cours);
		  }
		  
          void Eleve::supprimerCoursOuvert(Cours cours){
          	liste_cours_ouvert.pop_back();
		  }
