#include <stdio.h>
#include<stdlib.h>

int vars(){
    int *i = (int*)malloc(3*sizeof(int));
    for(int j=0;j<3;j++){
        scanf("%d",(i+j));
    }
    return i;
}

int main()
{
    int *k;
    k=vars();
    printf("\n%d\n%d\n%d",*k,*(k+1),*(k+2));
    return 0;
}
