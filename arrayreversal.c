<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    int num, *arr, i;
    scanf("%d", &num);
//    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
*/
    int i,j,k;
    int n,m;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--)

    {
         printf("%d ",a[i]);
    }

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    int num, *arr, i;
    scanf("%d", &num);
//    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
*/
    int i,j,k;
    int n,m;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--)

    {
         printf("%d ",a[i]);
    }

    return 0;
}
>>>>>>> f72bc80a7e41a14c4f2f09535f7f1b4ecf9d2126

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k;
    int n,m;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--)

    {
         printf("%d ",a[i]);
    }

    return 0;
}
