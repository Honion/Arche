#include<string>
#include<list>
#include<iostream>
#include"Url.h"


using namespace std; 
 
 
  				void Url::setAdresse(std::string adresse){
  					Adresse=adresse;
  				}
  
            	void Url::setTitre(std::string titre){
             		 Titre=titre;
			 	}
			 	
             	std::string Url::getTitre(){
             		return Titre;
			 	}
			 	
             	std::string Url::getAdresse(){
             		return Adresse;
			 	}
