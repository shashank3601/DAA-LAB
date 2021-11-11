#include<stdio.h>
#include<math.h>

int min(int a, int b){

    if(b<a)
        return b;
    else
        return a;

}
int jump_search(int a[],int n,int k){
    int jump=sqrt(n);
    int steps=jump;
    int prev=0;
    while(a[min(steps,n)-1]<k){
        prev=steps;
        steps+=jump;
        if(prev>=n)
            return -1;

    }

    while(a[prev]<k){
        prev+=1;
        if(prev==min(steps,n))
            return -1;
    }

    if(a[prev]==k)
        return prev;
    return -1;



}

int main(){

    int n,k,i=0,j,t;
   /* printf("no. of test cases ");
    scanf("%d",&t);
    while(i<t){ */

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

        jump_search(a,n,k);

    //}
    return 0;
}
