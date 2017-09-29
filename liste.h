#ifndef Strings_h
#define Strings_h


class maillon
{

	public:
	
	int val;
	maillon * succ;
	maillon * pred;
};

class liste
{
	maillon * tete;
	maillon * queue;
	
	public :
	
	liste();
	~liste();
	bool vide();
	void insertiontete(maillon * x);
	void insertionque(maillon * y);
	void insertionqe(int w);
	void insertionte(int v);
	void affiche();
	void del(maillon * t);
	maillon * recherche(int k);
	void suppresionenqueue();
	void suppresionentete();
};

class pile
{
	int min_tab ;
	int * tab ;
	int m_tab ;

	public : 
		pile() ;
		pile(int N) ;
		~pile() ;
		bool vide() ;
		bool plein() ;
		void empiler(int x) ;
		void depiler() ;
		void afficher_pile() ;
} ;

class file
{
	int debut ;
	int * tabl ;
	int max ;
	int que;

	public : 
		file() ;
		file(int ) ;
		~file() ;
		bool vide() ;
		bool plein() ;
		void enfiler(int ) ;
		void defiler() ;
		void afficher_file() ;
} ;
#endif
