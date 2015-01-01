#include<string>
#include<list>
#include<iostream>
#include"Url.h"


using namespace std; 
 std::string Titre;
 std::string Adresse;
 
 
  				void setAdresse(std::string adresse){
  					Adresse=adresse;
  				}
  
            	void setTitre(std::string titre){
             		 Titre=titre;
			 	}
			 	
             	std::string getTitre(){
             		return Titre;
			 	}
			 	
             	std::string getAdresse(){
             		return Adresse;
			 	}
