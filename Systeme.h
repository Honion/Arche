#include <vector>

class Cours;
class IPersonne;
class Eleve;



class Systeme{
      
      public:
             Systeme();
             bool identifierPersonne(std::string id, std::string mdp);
             std::vector<Cours> identifierCoursOuvert(Eleve a);
             std::vector<Cours> identifierCours(IPersonne a);
             std::vector<Cours> listCourEnAttente();
             Cours getCours(std::string cours);
             IPersonne getPersonne(std::string nom);
             bool noteCorrecte(int note);
             void ajouterCoursEnAttente(Cours cours);
             std::vector<Cours> getCoursEnAttente();
             void ajouterCours(Cours cours);
             
             protected:
             std::vector<Cours> cours_attente;
             std::vector<Cours> liste_cours;
             std::vector<IPersonne> liste_personne;
             
};
       
