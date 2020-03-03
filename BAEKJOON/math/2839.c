#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N=0;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        for (int k=0; k<N; k++) {
            if ((3*i)+(5*k)==N) {
                printf("%d\n", i+k);
                return 0;
            }
        }
    }
    printf("%d\n", -1);
}
