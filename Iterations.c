// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");


#include <stdio.h>

int solution();
//int binary();

int main(void) {
    int gap = solution(51712);

    printf("%d\n",gap);

    return 0;
}

int binary(int N, int gap, int max, int one){
    if(N > 1){

        //printf("%d",one);

        int tmp = N % 2;

        if(tmp == 0 && one==1){
            gap = gap+1;
        }else if(tmp == 1){
            gap = 0;
            one=1;
        }

        if(gap > max){
            max = gap;
        }

        binary(N/2, gap , max,one);
    }else{
        return one == 1 ? max : 0;
    }
}

int solution(int N) {
    int gap = binary(N, 0, 0, 0 );

    return gap;
}
