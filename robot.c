#include <stdio.h>

struct Robot {
  int x, y;
  char direction;
  char command[10];
};

int main() {
  
  struct Robot robot;
  
  printf("\nEnter Value of X: ");
  int _= scanf("%d", &robot.x);

  printf("\nEnter Value of Y: ");
  int a_= scanf("%d", &robot.y);

  printf("\nEnter Direction: ");
  int b_= scanf(" %c", &robot.direction);

  printf("\nEnter Command: ");
  int c_= scanf("%s", robot.command);

  // direction
  
  if (robot.direction == 'E' && robot.command[0] == 'R') {
    robot.direction = 'S';
  } else if (robot.direction == 'E' && robot.command[0] == 'L'){
    robot.direction = 'N';
  } else if (robot.direction == 'S' && robot.command[0] == 'R'){
    robot.direction = 'W';
  } else if (robot.direction == 'S' && robot.command[0] == 'L'){
    robot.direction = 'E';
  } else if (robot.direction == 'N' && robot.command[0] == 'R'){
    robot.direction = 'E';
  } else if (robot.direction == 'N' && robot.command[0] == 'L'){
    robot.direction = 'W';
  } else if (robot.direction == 'W' && robot.command[0] == 'R'){
    robot.direction = 'N';
  } else if (robot.direction == 'W' && robot.command[0] == 'L'){
    robot.direction = 'S';
  }

  // commands
  
  // while (robot.command[0] == 'A') {
  //   if (robot.direction == 'E') {
  //     robot.x++;
  //   } else if (robot.direction == 'N') {
  //     robot.y++;
  //   } else if (robot.direction == 'W') {
  //     robot.x--;
  //   } else if (robot.direction == 'S') {
  //     robot.y--;
  //   }
  // }

  /* 
      N
    W-|-E
      S
      */
  
  for (int i = 1; robot.command[i] == '\0'; i++) {
    if (robot.command[i] == 'A') {
      if (robot.direction == 'E') {
        robot.x++;
      } else if (robot.direction == 'N') {
        robot.y++;
      } else if (robot.direction == 'W') {
        robot.x--;
      } else if (robot.direction == 'S') {
        robot.y--;
      }
    } else if (robot.command[i] == 'R') {
      if (robot.direction == 'E') {
        robot.direction = 'S';
      } else if (robot.direction == 'S') {
        robot.direction = 'W';
      } else if (robot.direction == 'W') {
        robot.direction = 'N';
      } else if (robot.direction == 'N') {
        robot.direction = 'E';
      }
    } else if (robot.command[i] == 'L') {
      if (robot.direction == 'E') {
        robot.direction = 'N';
      } else if (robot.direction == 'N') {
        robot.direction = 'W';
      } else if (robot.direction == 'W') {
        robot.direction = 'S';
      } else if (robot.direction == 'S') {
        robot.direction = 'E';
      }
    }
  }

  printf("\n{%d,%d} facing %c ", robot.x, robot.y, robot.direction);
  
  return 0;
}