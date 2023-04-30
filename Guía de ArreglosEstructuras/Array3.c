#include <stdio.h>

void array3() {
  char tabla[5][10] = {
      {'L', 'a', 'p', 'i', 'z', ' ', ' ', ' ', ' ', ' '},
      {'B', 'o', 'r', 'r', 'a', 'd', 'o', 'r', ' ', ' '},
      {'R', 'e', 'g', 'l', 'a', ' ', ' ', ' ', ' ', ' '},
      {'T', 'a', 'j', 'a', 'd', 'o', 'r', ' ', ' ', ' '},
      {'M', 'o', 'c', 'h', 'i', 'l', 'a', ' ', ' ', ' '}
  };
  
  // Imprimir la tabla
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      printf("| %c ", tabla[i][j]);
    }
    printf("|\n");
  }
  
}

// int main(){
//   array3();
// }
