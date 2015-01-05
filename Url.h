#ifndef __Url_H__
#define __Url_H__
#include<string>

using namespace std;


class Url{
      public:
             Url(std::string titre, std::string adresse);
			 ~Url();
             void setAdresse(std::string adresse);
             void setTitre(std::string titre);
             std::string getTitre();
             std::string getAdresse();
      protected:
             std::string Titre;
             std::string Adresse;
             
};

#endif
