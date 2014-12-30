#include<string>
#include<list>
#include<iostream>
#include "Cours.h"
#include "IPersonne.h"
#include "Eleve.h"
#include "Systeme.h"


using namespace std;
           
      vector<Cours> Systeme::identifierCoursOuvert(Eleve a)
      {
                vector<Cours> cours_ouvert = a.getCoursOuvert();
                return cours_ouvert;
      }         

      
      bool Systeme::identifierPersonne(string id, string mdp)
      {
           return true;
      }
      
      bool Systeme::noteCorrecte(int a)
      {
           return (a>=0 && a<=20) ;
      }
      
      vector<Cours> Systeme::identifierCours(IPersonne a)
      {
                  
      }
      
      vector<Cours> Systeme::listCourEnAttente()
      {
                return cours_attente;  
      }
      
      Cours Systeme::getCours(string cours)
      {
            
      }
      
      IPersonne Systeme::getPersonne(string nom)
      {
      
      }
      
      void Systeme::ajouterCoursEnAttente(Cours cours)
      {
           cours_attente.push_back(cours);
      }
      
      vector<Cours> Systeme::getCoursEnAttente()
      {
      }
      
      void Systeme::ajouterCours(Cours cours)
      {
           liste_cours.push_back(cours);
      }
            
      
       
