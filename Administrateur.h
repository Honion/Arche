#ifndef __Administrateur_H__
#define __Administrateur_H__

#include <string>
#include <vector>


class Cours;
class IPersonne;

class Administrateur{
      
      public:
             Administrateur(std::string id, std::string mdp);
			 ~Administrateur();
             std::string getIdentifiant();
             void setIdentifiant(std::string id);
             std::string getMdp();
             void setMdp(std::string mdp);
             void ajouterCours(Cours cours);
      
      protected:
             std::string Identifiant;
             std::string Mdp;
             std::vector<Cours> liste_cours;

};

#endif
