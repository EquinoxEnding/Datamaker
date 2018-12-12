// This part is used to make a 01 half-matrix or a common half-matrix.
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#define LL long long
#define F(i,a,b) for (int i = a ; i <= b ; ++ i)

char opt[10] ;
LL mod , n , m ;

template < typename T >
    inline T random ( T mod ) {
        srand ( rand () ^ rand () ) ;
        return rand () % mod ;
    }

int main () {
    srand ( time ( NULL ) ) ; freopen ( "Data.txt" , "w" , stdout ) ;
    fprintf ( stderr , "If you want a 01 half-matrix , please press Y for yes else press N for no.\n" ) ;
    scanf ("%s" , opt ) ;
    if ( opt[0] == 'Y' ){
        fprintf ( stderr , "Please key in the size of the half-matrix , n for lines and m for rows.\n") ;
        scanf ("%lld%lld" , & n , & m ) ;
        fprintf ( stderr , "If you want me to print this size press Y else press N.\n") ;
        scanf ("%s" , opt ) ;
        if ( opt[0] == 'Y' ) printf ("%d %d\n" , n , m ) ;
        F ( i , 1 , n ) { F ( j , 1 , n - i + 1 ) printf ("%lld " , ( rand () & 1 ) ? 0 : 1 ) ; putchar ( 10 ) ; }
    } else {
        fprintf ( stderr , "Please key in the data range,mod.\n") ;
        scanf ("%lld" , & mod  ) ;
        fprintf ( stderr , "Please key in the size of half-matrix , n for lines and m for rows.\n") ;
        scanf ("%lld%lld" , & n , & m ) ;
        fprintf ( stderr , "If you want me to print this size press Y else press N.\n") ;
        scanf ("%s" , opt ) ;
        if ( opt[0] == 'Y' ) printf ("%d %d\n" , n , m ) ;
        F ( i , 1 , n ) { F ( j , 1 , n - i + 1 ) printf ("%lld " , random ( mod ) ) ; putchar ( 10 ) ; }
    }
    fprintf ( stderr , "The data has been printed in Data.txt successfully.\n") ;
    fclose ( stdout ) ; Sleep ( 1750 ) ; return 0 ;
}