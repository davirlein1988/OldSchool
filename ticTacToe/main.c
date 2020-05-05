#include <stdio.h>

int main() {
  char grid[3][3] = {{'.', '.', '.'},{'.', '.', '.'},{'.', '.', '.'}}; 
  int row, col;
  for(row = 0; row < 3; row++) {
    for(col =0; col< 3; col++) {
      printf("%c ", grid[row][col]);
    }
    printf("\n");
  }
  return 0;
}