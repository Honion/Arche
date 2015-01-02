#include<string>
#include<list>
#include<iostream>
#include "Eleve.h"
#include "Cours.h"
#include "Note.h"
#include <vector>
#include<string>

using namespace std;
std::string Identifiant;
std::string Mdp;
std::vector<Cours> liste_cours;
std::vector<Cours> liste_cours_ouvert;

  vector<Cours> Eleve::getCoursOuvert()
  {             
                vector<Cours> a;
                return a;
  }
  
   void connexion(bool a){
          	
		  }
		  
          std::vector<Cours> identifierCoursOuvert(std::string cours_ouvert){
          	
		  }
		  
          std::vector<Cours> identifierCours(std::string cours){
          	
		  }
		  
          Cours getCours(std::string cours){
          	
		  }
		  
          std::vector<Cours> getCoursOuvert(){
          	vector<Cours> ListeCoursOuvert;
                  return ListeCoursOuvert;
		  }
		  
          void ajouterNotif(Note n){
          	
		  }
		  
		     std::string getMdp(){
		     	return Mdp;
			 }
		  
          void setMdp(std::string mdp){
          	Mdp = mdp;
		  }
		  
          std::string getIdentifiant(){
          	return Identifiant;
		  }
		  
          void setIdentifiant(std::string id){
          	Identifiant = id;
		  }
		  
          void ajouterCours(Cours cours){
          	 liste_cours.push_back(cours);
		  }
		  
          void ajouterCoursOuvert(Cours cours){
          	liste_cours_ouvert.push_back(cours);
		  }
		  
          void supprimerCoursOuvert(Cours cours){
          	liste_cours_ouvert.pop_back();
		  }
