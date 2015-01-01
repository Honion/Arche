#ifndef __Fichier_H__
#define __Fichier_H__

using namespace std;


class Fichier{
      public:
             Fichier(std::string titre, std::string corps);
             void setCorps(std::string corps);
             void setTitre(std::string titre);
             std::string getTitre();
             std::string getCorps();
      
      protected:
              std::string Titre;
              std::string Corps;
              
};

#endif
