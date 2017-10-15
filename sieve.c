/* Precondition:  a is an array of length n.
   Postcondition: elements of a at prime indices are 1, all other elements 
                  are 0.
*/
void sieve (int a[], int n) {
    int i, j;
    /* Initialize all elements, except first two, to 1. */
    a[0] = a[1] = 0;
    for (i = 2; i < n; i += 1) {
        a[i] = 1;
    }
    /* Iterate array, marking each element that is at a composite (not prime)
       index to 0. */
    for (i = 2; i < n; i += 1) {
        /* Element at a[i] is prime. */
        if (a[i] == 1) {
            /* Set all elements with indices that are multiples of i to 0. */
            for (j = i + i; j < n; j += i) {
                a[j] = 0;
            }
        }
    }
}
    
