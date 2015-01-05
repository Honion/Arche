#ifndef __ENSEIGNANT_H__
#define __ENSEIGNANT_H__

#include <string>
#include <vector>

class Cours;



class Enseignant{
      
      public:
             Enseignant(std::string id, std::string mdp);
			 ~Enseignant();
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
