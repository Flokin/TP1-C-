#include <iostream>
#include "chaine.cpp"
#include "liste.h"


using namespace std ;

int main ()
{
	liste L ;
	L.insertionte(5);
	L.insertionqe(6);
	L.insertionte(8);
	L.insertionqe(3);
	L.affiche();
	
	
	cout<<"----------------------------------------------"<<endl;
	
	maillon * tmp = L.recherche(8);
	L.del(tmp);
	L.affiche();
	
	cout<<"----------------------------------------------"<<endl;
	
	pile P(10) ;

	P.empiler(1) ;
	P.empiler(2) ;
	P.empiler(3) ;

	cout<<"----------------------------------------------"<<endl;
	
	P.afficher_pile() ;

	P.depiler() ;
	P.empiler(4) ;

	P.afficher_pile() ;
	
	cout<<"----------------------------------------------"<<endl;
	
	file F(10);
	
	F.enfiler(1);
	F.enfiler(2);
	F.enfiler(3);
	
	cout<<"----------------------------------------------"<<endl;
	
	F.afficher_file();
	
	F.defiler();
	F.enfiler(4);
	
	F.afficher_file();
		return 0;

}
