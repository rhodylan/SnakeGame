#include <stdio.h>
#include <unistd.h>

int main(){
    int pid1,pid2,pid3;
    pid1=fork();
    
    if(pid1==0){
        printf("\n I love \n");
    }
    else
        printf("\n Operating system \n");
    
    pid2=fork();

    if(pid2==0)
        printf("\n class, \n");
    else{
        printf("\n difficult \n");

        pid3=fork();

        printf("\n but interesting!! \n");
    }

    return 0;
        
}