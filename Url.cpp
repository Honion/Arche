#include"Url.h"
#include<string>
#include<list>
#include<iostream>


using namespace std; 
 
				Url::Url(std::string titre, std::string adresse)
				{
					Titre = titre;
					Adresse = adresse;
				}

				~Url()
				{
				}
 
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
