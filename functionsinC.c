<<<<<<< HEAD
#include <stdio.h>

#define max(a,b) (a>b?a:b)

int max_of_four(int a,int b,int c,int d){

    return max(a,max(b,max(c,d)));
}

int main() //driver func
{

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
=======
#include <stdio.h>

#define max(a,b) (a>b?a:b)

int max_of_four(int a,int b,int c,int d){

    return max(a,max(b,max(c,d)));
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
>>>>>>> f72bc80a7e41a14c4f2f09535f7f1b4ecf9d2126
}