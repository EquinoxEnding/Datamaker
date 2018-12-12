// This part is used to make a sequence.
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#define LL long long
#define F(i,a,b) for (int i = a ; i <= b ; ++ i)

LL mod , cnt , n ;

template < typename T >
    inline T random ( T mod ) {
        srand ( rand () ^ rand () ) ;
        return rand () % mod ;
    }

int main(){
    srand ( time ( NULL ) ) ;
    printf ("Please Set mod and N:\n") ;
    freopen ("Data.txt" , "w" , stdout ) ; 
    scanf ("%lld %lld" , & mod , & n ) ;
    F ( i , 1 , n ){
        int t = random ( mod ) ;
        printf ("%lld " , random ( mod ) ^ t ) ;
        //Reset () ;
    }
    fclose ( stdout ) ;
    fprintf ( stderr , "The data has been printed in Data.txt successfully.\n") ;
    Sleep ( 1750 ) ; return 0 ;
}