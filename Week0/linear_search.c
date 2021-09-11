#include<stdio.h>
int main(){

    int n,k,i=0,j,t;
    printf("no. of test cases ");
    scanf("%d",&t);
    while(i<t){
        printf("no of elements in the array ");
        scanf("%d",&n);
        int a[n];
        printf("elements in the array ");
        for(j=0;j<n;j++){

            // if(a[i]>=0)
            scanf("%d",&a[j]);
        }
        printf("the key element is ");
        scanf("%d",&k);


        for(j=0;j<n;j++){

            if(a[j]==k){
                printf("key element found at %d comparisons \n",j+1);
                //exit(0);

            }
        }
        i++;
    }

}
