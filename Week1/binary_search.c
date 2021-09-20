#include<stdio.h>
int main(){

    int n,k,i=0,j,t;
   // printf("no. of test cases ");
    scanf("%d",&t);
    while(i<t){

         //printf("no of elements in the array ");
        scanf("%d",&n);
        int a[n];
       // printf("elements in the array ");
        for(j=0;j<n;j++){

            // if(a[i]>=0)
            scanf("%d",&a[j]);
        }
       // printf("the key element is ");
        scanf("%d",&k);

        int l=0,r=n-1,cc=0;
        while(l<=r){
            int m=l+((r-l)/2);
            cc+=1;
            if(a[m]==k){
                printf("Present %d\n",cc);
                break;
            }
            else if(a[m]<k)
                l=m+1;
            else
                r=m-1;

        }
        if(l>r)
        printf("Not Present %d\n",cc);
        i++;
    }

}
