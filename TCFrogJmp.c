//
// Created by juanesrios on 29/09/21.
//

#include <stdio.h>

int solution(int X, int Y, int D){



    int distance = Y > X ? Y-X : X-Y;

    int saltos = distance % D ==0 ? distance/D : distance/D +1;

    printf("%d",saltos);

}

int main(void) {

    printf("%d\n",1);

    solution(10,85,30);



    return 0;
}
