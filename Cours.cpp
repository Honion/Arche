#include "Cours.h"
#include "Eleve.h"
#include "Enseignant.h"
#include "Note.h"
#include "IRessource.h"

using namespace std;
std::string Titre;
int NombreDePlace;
std::time_t DateDebut;
std::time_t DateFin;
bool Ouvert;


  			void inscrire(Eleve eleve){
  				
			  }
			  
             void inscrireAttente(Eleve eleve){
             	
			 }
			 
             void desinscrire(Eleve eleve){
             	
			 }
			 
             bool ressourceCorrecte(IRessource ressource){
             	
			 }
			 
             void ajouterRessource(IRessource ressource){
             	
			 }
			 
             IRessource getRessource(std::string ressource){
             	
			 }
			 
             Note getNote(Eleve eleve){
             	
			 }
			 
             std::vector<IRessource> getListRessource(){
             	
			 }
			 
             void supprimerRessource(IRessource){
             	
			 }
			 
             std::vector<Eleve> getListeEtudiant(){
             	
			 }
			 
             void setTitre(std::string titre){
             	Titre = titre;
			 }
			 
             void setNombreDePlace(int nb_place){
             	NombreDePlace = nb_place;
			 }
			 
             void setDateDebut(std::time_t date){
             	DateDebut = date;
			 }
			 
             void setDateFin(std::time_t date){
             	DateFin = date;             	
			 }
			 
             void setOuvert(bool ouvert){
             	Ouvert = ouvert;
			 }
			 
             std::string getTitre(){
             	return Titre;
			 }
			 
             int getNombreDePlace(){
             	return NombreDePlace;
			 }
			 
             std::time_t getDateDebut(){
             	return DateDebut;
			 }
			 
             std::time_t getDateFin(){
             	return DateFin;
			 }
			 
             bool getOuvert(){
             	return Ouvert;
			 }
			 
             Eleve getEleve(std::string){
             	
			 }
			 
             int getNombreInscrit(){
             	
			 }
			 
             bool courComplet(){
             	
			 }
			 
             void ajouterNote(Eleve eleve, Note note){
             	
			 }
    
    
