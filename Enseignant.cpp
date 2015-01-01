#include<string>
#include<list>
#include<iostream>
#include "Cours.h"
#include "IPersonne.h"
#include <vector>



using namespace std;
std::string Identifiant;
std::string Mdp;

             std::string getMdp(){
             	return Mdp;
			 }
			 
             void setMdp(std::string mdp){
             	Mdp = mdp;
			 }
			 
             std::vector<Cours> getCours(){
             		vector<Cours> ListeCours;
                  return ListeCours;
			 }
			 
             std::string getIdentifiant(){
             	return Identifiant;
			 }
			 
             void setIdentifiant(std::string id){
             	Identifiant = id;
			 }
			
