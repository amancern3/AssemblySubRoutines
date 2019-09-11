//
// Created by aman842 on 8/19/19.
//

#include <stdio.h>
#include <stdbool.h>

bool array_eq (unsigned X[], unsigned Y[], int m , int n ) {
    for (int i = 0; i < m ; ++i) {
        if ( X[i] <= Y[i] )
            return 0 ;
    }

    return 1 ;
}

int main () {
    unsigned X[] =  { 25 , 1002 , 233 , -137 , 6332 , -33191 } ;
    unsigned Y[] = { 35 , 102 , 109 , -1378 , 6332 , -33194 } ;
    int m = 6 ;
    int n = 6 ;

    bool comp = 0 ;

    comp = array_eq(X, Y, m , n ) ;

    if (comp == 1 )
        printf("The X array is greater ") ;
    else
        printf("The Y array is greater") ;

}