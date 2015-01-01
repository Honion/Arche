#ifndef __ENSEIGNANT_H__
#define __ENSEIGNANT_H__
#include "Cours.h"
#include "IPersonne.h"

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
			
