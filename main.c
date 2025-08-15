#include <stdio.h>

int calc (int n) {
    int j = n;
    for (int i = 1; i <= 10; i++){
        j*= i;
        printf("%d \n", j);
        j=n;
        }
   }

int main(void) {

int n;
    scanf("%d",&n);
    int cal = calc(n);

    return 0;
}