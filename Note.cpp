#include"Note.h"
#include<string>
#include<list>
#include<iostream>


using namespace std;

		Note::Note(int n)
		{
			note = n;
		}

		Note::~Note()
		{
}

  		void Note::setNote(int n){
  			note = n;
  		}
  				
             	int Note::getNote(){
             		return note;
				 }

