#ifndef __IRessource_H__
#define __IRessource_H__

#include<string>

class Devoir;
class Url;
class Fichier;


class IRessource{
      public:
      	IRessource();
    	 std::string getTitre();
    	void setTitre(std::string titre);
       
        
        protected:
        	std::string Titre;
          
             
};
#endif
