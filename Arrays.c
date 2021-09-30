//
// Created by juanesrios on 29/09/21.
//

#include <stdio.h>

struct Results {
    int * A;
    int N; // Length of the array
};

struct Results solution(int A[], int N, int K){
    int tmp=A[0];
    int aux;
    for(int j=0; j<K; j++){
        for(int i=0; i<N ; i++){
            if(i+1 < N){
                aux = A[i+1];
                A[i+1]=tmp;
                tmp = aux;

            }else{
                A[0] = tmp;
            }

        }

    }

    struct Results r;
    r.A=A;
    r.N=N;

    return r;
}

int main(void) {

    printf("%d\n",1);

    int A[] ={3,8,9,7,6};

    struct Results r = solution(A,5,3);

    for(int i=0;i<r.N;i++){
        printf("%d\n", r.A[i]);
    }

    return 0;
}
