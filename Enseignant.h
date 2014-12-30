#ifndef __ENSEIGNANT_H__
#define __ENSEIGNANT_H__
#include "Cours.h"
#include "IPersonne.h"



class Enseignant : IPersonne{
      
      public:
             Enseignant(std::string id, std::string mdp);
             std::string getMdp();
             void setMdp(std::string mdp);
             std::vector<Cours> getCours();
             std::string getIdentifiant();
             void setIdentifiant(std::string id);
             
             
      protected:
      
      std::string Identifiant;
      std::string Mdp;
};
#endif
