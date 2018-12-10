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

inline void Reset () { srand ( time ( NULL ) ) ; return ; }

int main(){
    srand ( time ( NULL ) ) ;
    printf ("Please Set mod and N:\n") ;
    freopen ("Data.txt" , "w" , stdout ) ; 
    scanf ("%lld %lld" , & mod , & n ) ;
    F ( i , 1 , n ){
        int t = random ( mod ) ;
        printf ("%lld " , random ( mod ) ^ t ) ;
    }
    fclose ( stdout ) ;
    fprintf ( stderr , "The data has successfully printed in Data.txt.\n") ;
    Sleep (2000) ; return 0 ;
}