#include<stdio.h>
#include<stdlib.h>
typedef struct  Pro{
    int p_id;
    int at,ct,bt,tat,wt,rt;
} Process;

int cmpfunc (const void * a, const void * b) {
   return ((Process*)a)->at > ((Process*)b)->at;
}
int main(){
    Process arr[3];
    // for(int i=0;i<3;i++){
    //     scanf("%d %d %d",arr[i].p_id,arr[i].at,arr[i].bt);
    // }
    arr[0].p_id=1;
    arr[0].at=0;
    arr[0].bt=2;
    arr[1].p_id=2;
    arr[1].at=4;
    arr[1].bt=3;
    arr[2].p_id=3;
    arr[2].at=3;
    arr[2].bt=4;
    for(int i=0;i<3;i++){
        printf("%d      %d     %d\n",arr[i].p_id,arr[i].at,arr[i].bt);
       }
     qsort(arr, 3, sizeof(Process), cmpfunc);
       for(int i=0;i<3;i++){
        printf("%d      %d     %d\n",arr[i].p_id,arr[i].at,arr[i].bt);
       }
}
