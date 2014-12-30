#include <ctime>
using namespace std;

class Devoir
{
      public:
             Devoir(std::string titre, std::string enonce, time_t date);
             void setEnonce(std::string enonce);
             void setTitre(std::string titre);
             std::string getTitre();
             std::string getEnonce();
             time_t getDate();
             void setDate(time_t date);
             
             
             
      protected:
                std::string Titre;
                std::string Enonce;
                time_t DateLimite;
};
       
