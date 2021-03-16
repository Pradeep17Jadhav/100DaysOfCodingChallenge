/**
https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen&isFullScreen=false
Tried this simple question from hackerrank. Using C++ pointers almost after 2 years. I had to revise some concepts
*/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int temp = *a;
    *a += *b;
    *b = (temp - *b) < 0 ? (*b - temp ) : (temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}