#ifndef __COURS_H__
#define __COURS_H__
#include <ctime>
#include <vector>
#include <string>

class Eleve;
class Enseignant;
class Note;
class IRessource;

class Cours{
      public:
             Cours(std::string nom, std::time_t date_debut, std::time_t date_fin, bool ouvert);
			 ~Cours();
             void inscrire(Eleve eleve);
             void inscrireAttente(Eleve eleve);
             void desinscrire(Eleve eleve);
             bool ressourceCorrecte(IRessource ressource);
             void ajouterRessource(IRessource ressource);
             IRessource getRessource(std::string ressource);
             Note getNote(Eleve eleve);
             std::vector<IRessource> getListRessource();
             void supprimerRessource(IRessource);
             std::vector<Eleve> getListeEtudiant();
             void setTitre(std::string titre);
             void setNombreDePlace(int nb_place);
             void setDateDebut(std::time_t date);
             void setDateFin(std::time_t date);
             void setOuvert(bool ouvert);
             std::string getTitre();
             int getNombreDePlace();
             std::time_t getDateDebut();
             std::time_t getDateFin();
             bool getOuvert();
             Eleve getEleve(std::string);
             int getNombreInscrit();
             bool courComplet();
             void ajouterNote(Eleve eleve, Note note);
             
      protected:
      			std::vector<Eleve> Liste_eleve;
      			std::vector<Eleve> Liste_eleve_attente;
      			std::vector<IRessource> Liste_ressource;
                std::string Titre;
                int NombreDePlace;
                std::time_t DateDebut;
                std::time_t DateFin;
                bool Ouvert;
                
};
                
                
#endif
