#ifndef __ELEVE_H__
#define __ELEVE_H__
#include <vector>
#include <string>

class Cours;
class Note;

class Eleve{
      
      public:
          Eleve(std::string id, std::string mdp);
          void connexion(bool a);
          std::vector<Cours> identifierCoursOuvert(std::string cours_ouvert);
          std::vector<Cours> identifierCours(std::string cours);
          Cours getCours(std::string cours);
          std::vector<Cours> getCoursOuvert();
          void ajouterNotif(Note n);
            std::string getMdp();
          void setMdp(std::string mdp);
          std::string getIdentifiant();
          void setIdentifiant(std::string id);
          void ajouterCours(Cours cours);
          void ajouterCoursOuvert(Cours cours);
          void supprimerCoursOuvert(Cours cours);
          
          protected:
          std::string Identifiant;
          std::string Mdp;
          std::vector<Cours> liste_cours;
          std::vector<Cours> liste_cours_ouvert;
};          
#endif
