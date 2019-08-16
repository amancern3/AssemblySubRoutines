#include <stdio.h>

int mult(int m , int n) {

    if ( m == 0|| n == 0)
        return 0 ;

    if ( n < 0 )
        return mult(-m , -n) ;

    if ( n == 1 )
        return m ;

    return m + mult(m , n - 1) ;
}

int main() {
    int m, n;
    printf("Enter your M and N\n");
    scanf("%d %d", &m , &n) ;
    printf("Product after multiplication is %d\n", mult(m,n));
}
