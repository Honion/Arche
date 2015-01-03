#include"Devoir.h"
#include<string>
#include<list>
#include<iostream>
#include<string>
#include <ctime>

using namespace std;


           	void Devoir::setEnonce(std::string enonce){
           		Enonce = enonce;
			   }
			   
             void Devoir::setTitre(std::string titre){
             	Titre = titre;
			 }
			 
             std::string Devoir::getTitre(){
             	return Titre;
			 }
			 
             std::string Devoir::getEnonce(){
             	return Enonce;             	
			 }
			 
             time_t Devoir::getDate(){
             	return DateLimite;
			 }
			 
             void Devoir::setDate(time_t date){
             	DateLimite = date;
			 }
             
