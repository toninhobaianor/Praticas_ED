#include <stdio.h>
#include <stdlib.h>

int inc(int a) {
  return a+1;
}

int main(int argc, char** argv) {
  for(int i=1; i < 5; i++) {
     int a = 1;
     a = inc(a);
     printf("%d",a);
  }

  return argc;
}
// não ocorre uma soma,pois a variavel e sempre iniciada la dentro
