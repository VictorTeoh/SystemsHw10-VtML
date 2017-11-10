#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

static void sighandler(int signo){
  if (signo == SIGINT){
    exit(0);
  }
  if (signo == SIGUSR1){
    printf("PARENT PID: %d \n", getpid());
  }
  printf("help\n");
}

int main(){
  signal( SIGINT, sighandler);
  signal( SIGUSR1, sighandler);
  while(1){
    printf("pid : %d \n", getpid());
    sleep(1);
  }
}
