#include<stdio.h>
#include<string.h>

int main(){
  
  char number[20], newNumber[20];
  int j = 0;
  
  printf("Enter your number: ");
  int _= scanf("%[^\n]", number);

  if (strlen(number) >= 3 && number[0] == '+' && number[1] == '8' && number[2] == '8') {
    strcpy(number, &number[3]);
  }

  for (int i = 0; i < strlen(number); i++) {
    if (number[i] != ' ' && number[i] != '-' && number[i] != '.' && number[i] != '(' && number[i] != ')'){
      newNumber[j++] = number[i];
    }
  }

  printf("%s", newNumber);
  
  return 0;
}