#include "liste.h"
#include <iostream>


using namespace std ;
															// Liste //
liste::liste()
{
	tete = NULL;
	queue =  NULL;
}

liste::~liste()
{
	delete [] tete;
}

bool liste::vide()
{
	if(tete==NULL)
	{
		return true;
	}
	return false;
}

void liste::insertiontete(maillon * x)
{
	x->succ = tete;
	if(!vide())
	{
		tete->pred = x;
	}
	else
	{
		queue=x;
	}
	tete = x;
	tete->pred=NULL;
}	

void liste::insertionque(maillon * y)
{
	if(!vide())
	{
		queue->succ=y;
		y->pred=queue;
	}
	else
	{
		insertiontete(y);
		return;
	}
	queue = y;
	queue->succ=NULL;
}

void liste::insertionte(int v)
{
	maillon * test = new maillon;
	test->val = v;
	insertiontete(test);
}

void liste::insertionqe(int w)
{
	maillon * tet = new maillon;
	tet->val = w;
	insertionque(tet);
}

void liste::del(maillon * t)
{
	if(t->pred == NULL)
	{
		tete = t->succ;
	}
	else 
	{
		(t->pred)->succ=t->succ;
	}
	if(t->succ == NULL)
	{
		(t->succ)->pred=t->pred;
	}
}

maillon * liste::recherche(int k)
{
	maillon * zob = tete;
	
	while(zob!=NULL)
	{
		if(zob->val==k)
		{
				return zob;
		}
		zob=zob->succ;
	}
}
/*
void liste::suppresionentete()
{
	if(!vide())
	{
		tete=tete->succ;
		if(tete!=NULL)
		{
			tete->pred=NULL;
		}	
		cout<<"Tete deleted !"<<endl;
	}
	else
	{
		cout<<"Rien à supprimer"<<endl;
		return;
	}
}

void liste::suppresionenqueue()
{
	if(!vide())
	{
		queue=queue->pred;
		if(queue!=NULL)
		{
			queue->succ=NULL;
		}	
		cout<<"Queue deleted !"<<endl;
	}
	else
	{
		cout<<"Rien à supprimer"<<endl;
		return;
	}
}
* */

void liste::affiche()
{
	maillon * print = tete;
	while(print!=NULL)
	{
		cout<<print->val<<endl;
		print=print->succ;
	}
}
 

															// Pile //

pile::pile()
{
	m_tab = 0 ;
	min_tab = 0 ;

	tab = new int[m_tab] ; 
}

pile::pile(int m)
{
	cout << "Une pile est crée"<< endl ;
	m_tab = m ;
	min_tab = 0 ;

	tab = new int[m_tab] ;
}

pile::~pile()
{
	delete [] tab ;
}

bool pile::vide()
{
	if(min_tab == 0) 
	{
		return true ;
	}
	return false ;
}

bool pile::plein()
{
	if(min_tab == m_tab) 
	{
		return true ;
	}
	return false ;
}

void pile::empiler(int x)
{
	if(!plein())
	{
		tab[min_tab] = x ;
		min_tab += 1 ;
	}
	else
	{
		return ;
	}
}

void pile::depiler()
{
	if(vide())
	{
		cout << "La pile est vide ! " << endl ;
	}
	else
	{
		min_tab -= 1 ;
	}
}

void pile::afficher_pile()
{
	for(int i = 0 ; i < min_tab ; i++)
	{
		cout << i << "	|	" << tab[i] << endl ;
	}
}
															// File //	
																													
file::file()
{
	max = 0 ;
	debut = 0 ;
	que = 0;

	tabl = new int[max] ; 
}

file::file(int q)
{
	cout << "Une file est crée"<< endl ;
	max = q ;
	debut = que = 0 ;

	tabl = new int[max] ;
}


file::~file()
{
	delete [] tabl ;
}

bool file::vide()
{
	if(debut == que) 
	{
		return true ;
	}
	return false ;
}

bool file::plein()
{
	if(que == max) 
	{
		return true ;
	}
	return false ;
}

void file::enfiler(int x)
{
	if(!plein())
	{
		tabl[que] = x ;
		que ++;
	}
	else
	{
		return ;
	}
}

void file::defiler()
{
	int tam = 0 ;

	if(!vide())
	{
		tam = tabl[0] ;
		
		for(int i = 0 ; i < que ; i++)
		{
			tabl[i] = tabl[i+1] ;
		}

		que-- ;

		cout << "La valeur " << tam << " vient de sortir de la file ! " << endl ;
	}
	else
	{
		cout << "Erreur : file vide il n'y a rien a enlever ! " << endl ;
	}
}

void file::afficher_file()
{
	for(int i = debut ; i < que ; i++)
	{
		cout << i << "	|	" << tabl[i] << endl ;
	}
}
