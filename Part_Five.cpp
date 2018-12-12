//This part is used to make a Floyd-matrix.
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#define LL long long
#define F(i,a,b) for (int i = a ; i <= b ; ++ i)

LL mod , n , m , q ;
LL mk[5005][5005] ;

template < typename T >
    inline T random ( T mod ) {
        srand ( rand () ^ rand () ) ;
        return ( rand () * 10000 + rand () ) % mod ;
    }

int main () {
    srand ( time ( NULL ) ) ;
	freopen ( "Data.txt" , "w" , stdout ) ;
	fprintf ( stderr , "Please key in the size of Matrix,n lines ans n columns.\n") ;
    scanf ("%lld" , & n ) ; printf ("%lld\n" , n ) ;
    fprintf ( stderr , "Please key in the data range,mod.\n") ;
    scanf ("%lld" , & mod ) ;
    F ( i , 1 , n ) F ( j , 1 , n ) mk[i][j] = 0 ;
    F ( i , 1 , n ) { 
        F ( j , 1 , n ) {
            if ( ! mk[i][j] && ! mk[j][i] ) {
                LL tmp = random ( mod ) ;
                printf ("%lld " , tmp ) ;
                mk[i][j] = mk[j][i] = tmp ;
            }
            else printf ("%lld " , mk[i][j] ) ;
        }
        putchar ( 10 ) ; 
    }
    fprintf ( stderr , "The data has been printed in Data.txt successfully.\n") ;
    system ("pause") ; fclose ( stdout ) ; Sleep ( 1750 ) ; return 0 ;
}