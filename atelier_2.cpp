// ---------------------------------------exercice 1 :------------------------------------------------------------

#include <iostream>
using namespace std ;
void compt_appel()
{
    static int cpt = 0; // on a utiliser static pour que la variable garde sa valeur entre les appels
    cpt++ ;
    cout << " le nombre d'appel est :" << cpt << endl ;

};
int main ()
{
    compt_appel() ; // appel 1 
    compt_appel() ; // appel 2 
    compt_appel() ; // appel 3
    compt_appel() ; // appel 4
    return 0 ;
};




// --------------------------------------exercice 2 :---------------------------------------------------------

#include <iostream>
using namespace std ;
bool mult_de_2 (int n)
{
    return (n%2 == 0) ;
};
bool mult_de_3 (int n)
{
    return (n%3 == 0) ;
};
int main ()
{
    int x ;
    cout << "donner la valeur de x : " ;
    cin >> x ;
    if (mult_de_2(x))
        cout << x << " est un nombre pair " << endl ;
    else
        cout << x << " est un nombre impair " << endl ;
    if (mult_de_3(x))
        cout << x << " est multiple de 3 " << endl ;
    else 
        cout << x << " n'est pas multiple de 3 " << endl ;
    if (mult_de_2(x) && mult_de_3(x))
        cout << x << " est devisible par 6 " << endl ;
    else 
        cout << x << " n'est pas devisible par 6 " << endl ;
    return 0 ; 
}; 


// -----------------------------------exercice 3 : ----------------------------------------------------------

// methode avec tableau statique 
#include <iostream>
using namespace std ;
int main ()
{
    int T[10] ;
    int i ;
    cout << " donner les elements du tableau : " << endl ;
    for ( i=0 ; i<10 ; i++)
    {
        cin >> T[i] ;
    }
    int max = T[0] , min = T[0] ;
    for (i=1 ; i<10 ; i++)
    {
        if (T[i] > max)
        max = T[i];
    if (T[i] < min)
        min = T[i];
    }
    cout << " le max est : " << max << endl ;
    cout << " le min est : " << min << endl ;
    return 0 ;
}; 



// methode avec formalisme pointeur :
#include <iostream>
using namespace std ;
int main ()
{
    int T[10] ;
    int i ;
    int *p = T ;
    cout << " donner les elements du tableau : " << endl ;
    for ( i=0 ; i<10 ; i++)
    {
        cin >> *(p+i) ;
    }
    int max = *p , min = *p ;
    for (i=1 ; i<10 ; i++)
    {
        if (*(p+i) > max) 
        max = *(p+i);
        if (*(p+i) < min) 
        min = *(p+i);
    }
    cout << " le max est : " << max << endl ; 
    cout << " le min est : " << min << endl ;
    return 0 ;
};



// -----------------------------------------exercice 4 :---------------------------------------------------



#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << " donner la taille du tableau :" ;
    cin >> n ;
    if (n <= 0)
    {
        cout << " taille insuffisante " << endl ;
        return 0 ;
    }
    int *T = new int [n] ; // allocation dyna;ique 
    int i ;
    cout << " donner les elements du tableau : " << endl ;
    for ( i=0 ; i<n ; i++)
    {
        cin >> T[i] ; // ou *(T+i)
    }
    // creation d'un deuxieme tableau :
    int *R = new int [n] ;
    for (i=0 ; i<n ; i++)
    {
        R[i] = T[i] * T[i] ;
    }
    cout << " le tableau des carres est : " << endl ;
    for (i=0 ; i<n ; i++)
    {
        cout << R[i] << " " ;
    }
    cout << endl ;
    delete [] T ; // liberation de T 
    delete [] R ; // liberation de R
    return 0 ;
} 




// ----------------------------------------EXERCICE 5 :---------------------------------------------

   #include <iostream>
using namespace std ;
int main()
{
    int a ;
    int &ref = a ;
    int *p = &a ;
    cout << " donner la valeur de a : " ;
    cin >> a ;
     cout << " donner l'adresse de a  : " ;
     cout << &a << endl ;
    cout << " la valeur de ref est : " << ref << endl ;
    cout << " l'adresse de reference est : " << &ref << endl ;
    cout << " la valeur pointee par p est : " << *p << endl ;
    cout << " l'adresse stockee dans p est :" << p << endl ;
    cout << " l'adresse de p est : " << &p << endl ;
    return 0 ;

}

// ----------------------------------------exercice 6-----------------------------------------------------------------------------

// avec l'adresse des variables 
#include <iostream>
using namespace std ;
void incrementer (int *p) // incrementer la valeur pointee 
{
    (*p)++ ;

};
void permuter (int *x , int *y)
{
    int temp = *x ;
    *x = *y ;
    *y = temp ;
};
int main ()
{
    int a , b ;
    cout << " donner la valeur de a et b : " ;
    cin >> a >> b ;
    incrementer(&a) ;
    cout << " la valeur de a apres l'incrementation est : " << a << endl ;
    permuter(&a , &b) ;
    cout << " apres la permutation , a = " << a << " et b = " << b << endl ;
    return 0 ;
} 
// avec les references :

#include <iostream>
using namespace std ;
void incrementer (int &ref)
{
    ref++ ;
};
void permuter ( int &x , int &y)
{
    int temp = x ;
    x = y ;
    y = temp ;
};
int main ()
{
    int a , b ;
    cout << " donner la valeur de a et b : ";
    cin >> a >> b ;
    incrementer(a);
    cout << " la valeur apres l'incrementation  est :" << a << endl ;
    permuter (a , b) ;
    cout << " apres la permutation les valeurs sont : a = " << a << " et b = " << b << endl ;
    return 0 ;
} 

// --------------------------------------exercice 8 :-----------------------------------------------------------------


#include <iostream>
#include <string>
using namespace std ;
class voiture 
{
    private :
    string marque ;
    string modele ;
    int annee ;
    float kilometrage ;
    float vitesse ;
    public :
    voiture()
    {
        marque = "inconnue" ;
        modele = " inconnue" ;
        annee = 0 ;
        kilometrage = 0.0 ;
        vitesse = 0.0 ;
    }
    voiture ( string m , string mod , int a , float km , float v)
    {
        marque = m ;
        modele = mod ;
        annee = a ;
        kilometrage = km ;
        vitesse = v ;
    }
    void accelerer ( float inc) // methode pour accelerer la voiture 
    {
        voiture::vitesse += inc ;
    }
    void freiner ( float dec) // methode pour freiner la voiture 
    {
        voiture::vitesse -= dec ;
        if (voiture::vitesse < 0)
        voiture::vitesse = 0;
    }
    void afficher()
    {
        cout << " marque : " << marque << endl ;
        cout << " modele : " << modele << endl ;
        cout << " annee : " << annee << endl ;
        cout << " kilometrage : " << kilometrage << endl ;
        cout << " vitesse : " << vitesse << endl ;
    }
    void avancer ( float distance)
    {
        if (distance > 0)
        {
            kilometrage += distance ;
        }
    }
    ~voiture()
    {
        cout << " destruction de la voiture " << marque << " " << modele << endl ;
    }
};
int main ()
{
voiture v1 ;
v1.afficher() ;
voiture v2 ("Toyota" , "corolla" , 2020 , 15000.0 , 0.0);
v2.afficher();
v2.accelerer(50.0) ;
v2.afficher();
v2.avancer(100.0);
v2.afficher();
v2.freiner(20.0);
v2.afficher();
return 0 ;
};


//---------------------------------------exercice 10 :-------------------------------------------------------------------------



#include <iostream>
#include <math.h>
#include <limits>
using namespace std ;
class complexe 
{
    private :
    float reel ;
    float imaginaire ;
    public :
    complexe()
    {
        reel = 0.0 ;
        imaginaire = 0.0 ;
    }
    complexe ( float r , float i)
    {
        reel = r ;
        imaginaire = i ;
    }
    complexe operator+(const complexe &c) // surcharge de l'operateur +
    {
        return complexe (reel + c.reel , imaginaire + c.imaginaire);
    }
    complexe operator-(const complexe &c) // surcharge de l'operateur -
    {
        return complexe (reel - c.reel , imaginaire - c.imaginaire);
    }
    complexe operator*(const complexe &c) // surcharge de l'operateur *
    {
        return complexe (reel * c.reel , imaginaire * c.imaginaire);
    }
    complexe operator/(const complexe &c) // surcharge de l'operateur /
    {
        return complexe (reel / c.reel , imaginaire ? c.imaginaire);
    }
    bool operateur==(const complexe &c)
    {
        return (reel == c.reel && imaginaire == c.imaginaire);

    }
    void afficher()
    {
        cout << reel << " + " << imaginaire << " i " << endl ;
    }


};
int main ()
{
    complexe c1 , c2 ;
    cout << " donner les parties reels et imaginaires de c1 : " ;
    float r1 , i1 ;
    cin >> r1 >> i1 ;
    c1 = complexe (r1 , i1);
    cout << " donner les parties reels et imaginaires de c2 : " ;
    float r2 , i2 ;
    cin >> r2 >> i2 ;
    c1 = complexe (r2 , i2);
    cout << " choisir l'operation a effectuer (+ , - , * , / , == ) : " ;
    char op ;
    cin >> op ;
    switch (op)
    {
        case '+' :
        {
            complexe c3 = c1 + c2 ;
            c3.afficher();
            break ;
        };
        case '-' :
        {
            complexe c3 = c1 - c2 ;
            c3.afficher();
            break ;
        };
         case '*' :
        {
            complexe c3 = c1 * c2 ;
            c3.afficher();
            break ;
        };
         case '/' :
        {
            complexe c3 = c1 / c2 ;
            c3.afficher();
            break ;
        };
            case '==' :
            {
                if (c1 == c2)
                cout << " sont egaux " << endl ;
            else 
            cout << " ne sont pas egaux " << endl ;
             break ;
            };
            default :
            cout << " operation invalide " << endl ;

    };
    return 0 ;
};





