#include<stdio.h> 
#include<stdlib.h>
#include<limits.h>
typedef struct proc{
    int pid;
    int at,bt,ct,wt,tat;
}Process;

int myComp(const void*a,const void*b){
    return ((Process*)a)->at > ((Process*)b)->bt;
}
int main() 
{ 
  int n; 
  float tavg = 0.0, wavg = 0.0; 
  
  printf("ENTER THE NUMBER OF PROCESSES:"); 
  scanf("%d", & n); 
  Process arr[n];
  int  total = 0, temp, remainingTime[n], k, waiting[10], finish[10];
  for (int i = 0; i < n; i++) 
  { 
    printf("ENTER THE ARRIVAL TIME OF PROCESS %d:\t", i); 
    scanf("%d", & arr[i].at); 
    printf("ENTER THE BURST TIME OF PROCESS %d:\t", i); 
    scanf("%d", & arr[i].bt); 
    remainingTime[i]=arr[i].bt;
    
  } 
  qsort(arr,n,sizeof(Process),myComp);

 int time,remain=0;
  for(time=0;remain!=n;time++){
      int small=INT_MAX,indx;
      for(int i=0;i<n;i++){
          if(remainingTime[i]!=0  && arr[i].at <=i && remainingTime[i]<small){
              small=remainingTime[i];
              indx=i;
          }
      }
      remainingTime[indx]--;
      if(remainingTime[indx]==0){
          remain++;
          arr[indx].ct=time+1;
          arr[indx].tat = arr[indx].ct -arr[indx].at;
          arr[indx].wt= arr[indx].tat-arr[indx].bt;
        printf("\n PROCESS %d:-COMPLETION TIME==> %d TURNAROUND TIME==>%d WAITING TIME==>%d\n", indx+1, arr[indx].ct,arr[indx].tat,arr[indx].wt); 
      }
  }

  return 0; 
} 
