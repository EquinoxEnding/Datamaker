//This part is used to make a Chrysanthemum figure
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#define LL long long
#define F(i,a,b) for (int i = a ; i <= b ; ++ i)

const int N = 1e5 + 5 ;

char opt[10] ;
LL mod , n , m ;
LL f[N] , root ;

template < typename T >
    inline T random ( T mod ) {
        srand ( rand () ^ rand () ) ;
        return rand () % mod ;
    }

int main () {
    freopen ( "Data.txt" , "w" , stdout ) ;
    fprintf ( stderr , "Please key in the data of this Chrysanthemum figure,n.\n") ;
    scanf ("%lld" , & n ) ; printf ("%lld\n" , n ) ;
    fprintf ( stderr , "If you want the graph with value,press Y else press N.\n") ;
    scanf ("%s" , opt ) ;
    fprintf ( stderr , "Please key in the root.\n") ;
    scanf ("%lld" , & root ) ;
    if ( opt[0] == 'N' ){
        for (int i = 1 ;  i <= n ; ++ i)
            if ( i != root ) printf ("%lld %lld\n" , root , (LL)i ) ;
    } else {
        fprintf ( stderr , "Please key in the data range,mod.\n") ;
        scanf ("%lld" , & mod ) ;
        for (int i = 1 ;  i <= n ; ++ i)
            if ( i != root ) printf ("%lld %lld %lld\n" , root , (LL)i , random ( mod ) ^ random ( mod ) ) ;
    }
    fprintf ( stderr , "The data has been printed in Data.txt successfully.\n") ;
    fclose ( stdout ) ; Sleep ( 1750 ) ; return 0 ;
}