#include <stdio.h>
int fac(int n);
int main(){
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",fac(n));
    return 0;
}

int fac(int n) {
    int a = n;
    int sum = 1;
    for (int i = 1; i<= a; i++){
        sum *= n;
        n = n-1;
        
    }
    return sum;
}
