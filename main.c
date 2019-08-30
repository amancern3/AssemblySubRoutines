#include <stdio.h>

int mult(int m , int n) {
    int result ;

    if ( m == 0 || n == 0)
        return 0 ;

    if ( n < 0 ) {
        m = -m ;
        n = -n ;
    }
    for ( int i = 0 ; i < n ; ++i ) {
        result += m ;
    }
    return result ;
}

int main() {
    int m, n;
    printf("Enter your M and N\n");
    scanf("%d %d", &m , &n) ;
    printf("Product after multiplication is %d\n", mult(m,n));
}
