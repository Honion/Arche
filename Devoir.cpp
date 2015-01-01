#include<string>
#include<list>
#include<iostream>
#include"Devoir.h"
#include<string>
#include <ctime>

using namespace std;
std::string Titre;
std::string Enonce;
time_t DateLimite;


           	void setEnonce(std::string enonce){
           		Enonce = enonce;
			   }
			   
             void setTitre(std::string titre){
             	Titre = titre;
			 }
			 
             std::string getTitre(){
             	return Titre;
			 }
			 
             std::string getEnonce(){
             	return Enonce;             	
			 }
			 
             time_t getDate(){
             	return DateLimite;
			 }
			 
             void setDate(time_t date){
             	DateLimite = date;
			 }
             
