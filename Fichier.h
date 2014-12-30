


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
