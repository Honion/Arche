#include "Cours.h"
#include "Eleve.h"
#include "Enseignant.h"
#include "Note.h"
#include "IRessource.h"

using namespace std;
/*std::string Titre;
int NombreDePlace;
std::time_t DateDebut;
std::time_t DateFin;
bool Ouvert;*/


  			void inscrire(Eleve eleve){
  				liste_eleve.push_back(eleve);
			  }
			  
             void inscrireAttente(Eleve eleve){
             	liste_eleve_attente.push_back(eleve);
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
                  return Liste_ressource;
			 }
			 
             void supprimerRessource(IRessource){
             	
			 }
			 
             std::vector<Eleve> getListeEtudiant(){
                return Liste_eleve;
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
    
    
