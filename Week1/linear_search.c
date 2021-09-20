#include<stdio.h>
int main(){

    int n,k,i=0,j,t,flag;
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


        for(j=0;j<n;j++){

            if(a[j]==k){
                flag=j+1;
                break;
            }
            else
                flag=0;
        }
        if(flag!=0){
            printf("Present %d\n",flag);
        }
        else
            printf("Not Present %d\n",n);
        i++;
    }

}
