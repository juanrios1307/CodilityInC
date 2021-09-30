//
// Created by juanesrios on 29/09/21.
//

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include <stdio.h>

int solution();
//int binary();

int main(void) {

    int A[]= {2,3,1,5};

    int gap = solution(A,4);

    printf("%d\n",gap);

    return 0;
}


int solution(int A[] , int N) {

    int suma = ((N+1) * (N+2) )/2;
    for (int i=0;i<N;i++){
        suma = suma - A[i];
    }

    return suma;

}
