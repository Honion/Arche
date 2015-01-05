#include "Cours.h"
#include "Eleve.h"
#include "Enseignant.h"
#include "Note.h"
#include "IRessource.h"

using namespace std;

			Cours::Cours(std::string nom, time_t date_debut, time_t date_fin, bool ouvert)
			{
				Titre = nom;
				DateDebut = date_debut;
				DateFin = date_fin;
				Ouvert = ouvert;
			}


			Cours::~Cours()
			{
			}
			/*
  			void Cours::inscrire(Eleve eleve){
  				Liste_eleve.push_back(eleve);
			  }
			  
             void Cours::inscrireAttente(Eleve eleve){
             	Liste_eleve_attente.push_back(eleve);
			 }
			 
             void Cours::desinscrire(Eleve eleve){
             	
			 }
			 
             bool Cours::ressourceCorrecte(IRessource ressource){
				 return false;
			 }
			 
             void Cours::ajouterRessource(IRessource ressource){
             	
			 }
			 
/*             IRessource Cours::getRessource(std::string ressource){
             	
			 }
	
             Note Cours::getNote(Eleve eleve)
			 {
			 }
			 
             std::vector<IRessource> Cours::getListRessource(){
                  return Liste_ressource;
			 }
			 
             void Cours::supprimerRessource(IRessource){
             	
			 }
			 
             std::vector<Eleve> Cours::getListeEtudiant(){
                return Liste_eleve;
			 }
			 */
             void Cours::setTitre(std::string titre){
             	Titre = titre;
			 }
			 
             void Cours::setNombreDePlace(int nb_place){
             	NombreDePlace = nb_place;
			 }
			 
             void Cours::setDateDebut(std::time_t date){
             	DateDebut = date;
			 }
			 
             void Cours::setDateFin(std::time_t date){
             	DateFin = date;             	
			 }
			 
             void Cours::setOuvert(bool ouvert){
             	Ouvert = ouvert;
			 }
			 
             std::string Cours::getTitre(){
             	return Titre;
			 }
			 
             int Cours::getNombreDePlace(){
             	return NombreDePlace;
			 }
			 
             std::time_t Cours::getDateDebut(){
             	return DateDebut;
			 }
			 
             std::time_t Cours::getDateFin(){
             	return DateFin;
			 }
			 
             bool Cours::getOuvert(){
             	return Ouvert;
			 }
			 
			 /*
             Eleve Cours::getEleve(std::string){
             	
			 }
			 */
             int Cours::getNombreInscrit(){
				 return NombreDePlace;
			 }
			 
             bool Cours::courComplet(){
				 return Ouvert;
			 }
			 
             void Cours::ajouterNote(Eleve eleve, Note note){
             	
			 }
    
    
