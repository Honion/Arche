#include<string>


class Administrateur{
      
      public:
             Administrateur(std::string id, std::string mdp);
             std::string getIdentifiant();
             void setIdentifiant(std::string id);
             std::string getMdp();
             void setMdp(std::string mdp);
             void ajouterCours();
      
      protected:
             std::string Identifiant;
             std::string Mdp;

};
