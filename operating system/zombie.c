#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){

    int id=fork();
    if(id!=0){
        sleep(10000000000000000);
        printf("Inside parent block with id %d",getpid());
    }else{
        printf("Inside child block with id %d and parent id %d",getpid(),getppid());
    }
}