#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int b = -1;
  char c[20];

  gets(&c);

  if(strlen(c) != 10){
    printf("Error: Panjang data harus 10 Yeeee\n");
  }else{
    if (b == 0xbac0dc0c){
      printf("Onichan BAKA!!! >:|\n");
      system("cat flag.txt");
    }else{
      printf("Nope >.< \n");
    }
  }
  return 0;
}
