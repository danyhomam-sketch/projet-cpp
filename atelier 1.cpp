
// exercice 1 : 



#include <iostream>
using namespace std ;
int main ()
{
    char c = '\x01' ; // c en hexadecimal = 1 
    short int p = 10 ; // p = 10 
    cout << p + 3  << endl ; // p + 3 = 10 + 3 = 13 type int 
    cout << c + 1 << endl ; // c + 1 = 1 + 1 = 2 type int 
    cout << p + c << endl ; // p + c = 10 + 1 = 11 type int 
    cout << 3*p + 5*c << endl ; // 3*p + 5*c = 3*10 + 5*1 = 30 + 5 = 35 type int
    return 0 ;
}



// exercice 2 :



#include <iostream>
using namespace std ;
int main ()
{
    char c = '\x05' ; // c en hexadecimal = 5
    int n = 5 ; // n = 5 
    long p = 1000 ; // p = 1000 type long 
    float x = 1.25 ; // x =1.25 type float 
    double z = 5.5 ; // z = 5.5 type double 
    cout << n + c + p << endl ; //  5 + 5 + 1000 = 1010 type long
    cout << 2*x + c << endl ; //  2*1.25 + 5 = 2.5 + 5 = 7.5 type float 
    cout <<  char(n) + c << endl ; // 5 en char = 5 + 5 = 10 type int 
    cout << float(z) + n / 2 << endl ; // n / 2 = 2 car n est int donc 5.5 + 2 = 7.5 type float
    return 0 ;
}


// exercice 3 : 


#include <iostream>
using namespace std ;
int main ()
{
    int n = 5 , p = 9 ;
    float x ;
    int q ;
q = n < p  ; // q = 5 < 9 = vrai = 1
q = n == p ; // q = 5 == 9 = faux = 0 
q = p % n + p > n ; // q = 9 % 5 + 9 > 5 = 4 + 9 = 13 > 5 = vrai = 1
x = p / n ; // x = 9 / 5 = 1 
x = (float) p / n ; // x = 9 / 5  = 1.8
x = (p + 0.5) / n ; // x = (9 + 0.5) / 5 = 1.9 
x = (int) (p + 0.5) / n ; // x = (int) ( 9 + 0.5) / 5 = (int) 9.5 / 5 = 9 / 5 = 1
q = n * (p > n ? n : p) ; // q = 5 * (9 > 5 ? 5 : 9) = 5 * 5 = 25
q = n * (p < n ? n : p) ; // q = 5 * (9 < 5 ? 5 : 9) = 5 * 9 = 45
return 0 ;
} 


// exercice 4 : 


#include <iostream>
using namespace std ;
int main ()
{
    int i , j , n ;
    i = 0 ;
    n = i++ ;
    cout << " A : i = " << i << " n = " << n << endl ; // i = 1 and n = 0
    i = 10 ;
    n = ++i ;
    cout << " B : i = " << i << " n = " << n << endl ; // i = 11 and n = 11
    i = 20 ;
    j = 5 ; 
    n = i++ * ++j ;
    cout << " C : i = " << i << " j = " << j << " n =  " << n << endl ; // i = 21 and j = 6 and n = 20 * 6 = 120
    i = 15 ;
    n = i+= 3 ;
    cout << " D : i = " << i << " n = " << n << endl ; // n = 18 and i = 18 
    i = 3 ;
    j = 5 ;
    n = i *= --j ;
    cout << " E : i = " << i << " j = " << j << " n =  " << n << endl ; // i = 3 * 4 = 12 and j = 4and n = 12 
     return 0 ;
} 



// exercice 5 : 
 
#include <iostream> 
using namespace std ; 
void remplir ( int *arr , int n )
{
    for ( int i = 0 ; i < n ; i++)
    {
        cout << " arr [ " << i << "] = " ;
        cin >> arr [i] ;
    }
} // remplir le tableau 
void affiche ( const int* arr , int n)
{
    cout << " [ " ;
 for ( int i = 0 ; i < n ; i++)
 {
    cout << arr [i] << " " ;

 }
 cout << " ] " << endl ;

 } // afficher le tableau 
 int& max ( int* arr , int n )
 {
    int* max = arr ; // on suppose que le premier element du tableau est le max 
    for ( int i = 0 ; i < n ; i++)
    {
        if ( arr[i] > *max)
        { 
            max = &arr[i] ;
        }
    }
    return *max ; 

 } // retourner la reference de l'element max 
 void inverse ( int*arr , int n)
 {
   int* deb = arr ;
   int* fin = arr + n - 1 ;
   while ( deb < fin) 
   {
    swap ( *deb , *fin ) ;
    deb ++ ;
    fin -- ;
   }
 } // inverser le tableau
 int main ()
 {
     int n ; 
     cout << " donner la taille du tableau : " ;
     cin>> n ;
     int* arr = new int [n] ;
     remplir ( arr , n) ;
    affiche ( arr , n ) ;
    cout << " le max est :" << max ( arr , n ) << endl ;
    inverse ( arr , n) ;
    affiche ( arr , n ) ;
    delete [] arr ;
    return 0 ;

 }





