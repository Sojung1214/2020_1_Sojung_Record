#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int end, start;
    int tmp, init;
    init = 1;
    start = 1;
    end = 1;
    scanf("%d",&N);
    i = 1;
    for(;;){
        if((start <= N) &&(N <= end)){
            printf("%d",i);
            break;
        }
        tmp = 6 * i;
        end = tmp + init;
        start = end - tmp + 1;
        init = end;
        i++;
    }
}
