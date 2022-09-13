#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){


    int id=fork();
    //Child is sleeping
    if(id==0){
        sleep(10000000000000000);
        printf("Inside child block with id %d and parent id %d",getpid(),getppid());
    }else{
        printf("Inside parent block with id %d",getpid());
    }
}