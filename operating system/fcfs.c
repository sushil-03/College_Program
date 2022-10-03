#include <stdio.h>
#include <stdlib.h>
typedef struct p
{
    int p_id;
    int at, ct, bt, tat, wt, rt;
} P;

int cmpfunc(const void *a, const void *b)
{
    return ((P *)a)->at > ((P *)b)->at;
}
int main()
{
    int n;
    printf("Enter no. of process ");
    scanf("%d", &n);
    P arr[n];
    int idle = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter arrival and buss time of process %d \n", i);
        scanf("%d", &arr[i].at);
        scanf("%d", &arr[i].bt);
    }

    qsort(arr, n, sizeof(P), cmpfunc);
    arr[0].ct = arr[0].bt;
    arr[0].tat = arr[0].ct - arr[0].at;
    arr[0].rt = arr[0].at + arr[0].wt;
    arr[0].wt = arr[0].tat - arr[0].bt;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1].ct < arr[i].at)
        {
            arr[i].ct = arr[i].at + arr[i].bt;
        }
        else
        {
            arr[i].ct = arr[i - 1].ct + arr[i].bt;
        }
        if (arr[i].at > arr[i - 1].ct)
        {
            idle = idle + arr[i].at - arr[i - 1].ct;
        }
        arr[i].tat = arr[i].ct - arr[i].at;

        arr[i].wt = arr[i].tat - arr[i].bt;

        arr[i].rt = arr[i].at + arr[i].wt;
    }

    printf("  Arrival Time  |  Bus Time  |  Completion Time   |     Turn Around Time  |  Waiting Time   |   Response Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("   %d               %d             %d                    %d                      %d                    %d\n", arr[i].at, arr[i].bt, arr[i].ct, arr[i].tat, arr[i].wt, arr[i].rt);
    }
    int cpu_utlization = (((arr[n - 1].ct - idle) / arr[n - 1].ct) * 100);
    printf("CPU UTILIZATION : %d %\n", cpu_utlization);
}