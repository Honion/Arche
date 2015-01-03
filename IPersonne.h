#ifndef __IPersonne_H__
#define __IPersonne_H__
#include<string>

//class Eleve;
class Enseignant;
//class Administrateur;
//class Cours;

class IPersonne{
         public:
      		 IPersonne();
    		 std::string getIdentifiant();
    	   	void setIdentifiant(std::string id);
       		 std::string getMdp();
       		 void setMdp(std::string mdp);
        
        
        protected:
        	std::string Identifiant;
            std::string Mdp;
             
};
#endif

