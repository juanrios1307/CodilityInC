// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include <stdio.h>

int solution();
//int binary();

int main(void) {

    int A[]= {9,3,9,3,9,7,9};

    int gap = solution(A,7);

    printf("%d\n",gap);

    return 0;
}


int solution(int A[] , int N) {

  for (int i=0;i<N;i++){
        int check =0;

        int j=0;

        while(j<N && check<2){
            if(A[i] == A[j]){
                check++;
            }
            j++;
        }


        if(check < 2){
            return A[i];
        }

    }

}


//
// Created by juanesrios on 29/09/21.
//

