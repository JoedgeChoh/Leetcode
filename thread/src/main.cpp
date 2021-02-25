#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *thread(void *str) {
  for (int i=0; i<6; i++) {
    sleep(2); //线程sleep阶段会重新被主线程占据 
    printf ("This is in thread %d \n", i);
  }
  return NULL;
}

int main() {
  pthread_t pth;
  int i,ret;
  ret = pthread_create(&pth,NULL,thread,NULL);
  printf("Test Start \n");
  for (i=0; i<6; i++) {
    sleep(1); 
    printf ("This is in main %d \n", i); 
  }
  pthread_join (pth,NULL); // 等待ptr线程结束才会重新进入主线程
  return 0;
}
