#ifndef __Url_H__
#define __Url_H__


using namespace std;


class Url{
      public:
             Url(std::string titre, std::string adresse);
             void setAdresse(std::string adresse);
             void setTitre(std::string titre);
             std::string getTitre();
             std::string getAdresse();
      protected:
             std::string Titre;
             std::string Adresse;
             
};

#endif
