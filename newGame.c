#include<stdio.h>
#define x 100
typedef struct game{
  char name[2][100];
  int q;
  int y;
} g;
int main(){
  g player;
  printf("enter the name");
  scanf("%s",player.name);
  printf("player name is %s \n",player.name);
  printf("Game is start from here");
  return 0;
}
