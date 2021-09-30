//
// Created by juanesrios on 29/09/21.
//

#include <stdio.h>


int diferencia(int A[], int N, int P){

    int s1=0;
    int s2=0;

    for(int i=0;i<P;i++){
        s1 = s1+A[i];
    }

    for(int i=P ; i<N ; i++){
        s2 = s2+A[i];
    }

    return s1>s2? s1-s2 : s2-s1;

}

int solution(int A[], int N){
    int min = 2147483647;
    if(N>1){
        for(int i=1; i<N;i++){

            int sum = diferencia(A,N,i);
            if(sum < min){
                min = sum;
            }
        }
    }else{
        min = A[0];
    }

    return min;

}



int main(void) {

    int A[]={1,1};

    int s = solution(A,2);

    printf("%d",s);

    return 0;
}
