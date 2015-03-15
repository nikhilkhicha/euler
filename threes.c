#include<stdio.h>

int main()
{
    int count = 1000;
    int i;
    int sum = 0;
    for (i = 1; i < count;i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}
