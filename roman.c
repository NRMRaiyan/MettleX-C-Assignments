#include <stdio.h>

void roman(int num);

int main() {
  
  int x;
  
  printf("Enter your number: ");
  int _= scanf("%d", &x);
  
  roman(x); 

  return 0;
}

void roman(int num){
   
  char *first[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
  char *second[] = {"","X","XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  char *third[] = {"","C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  char *fourth[] = {"","M", "MM", "MMM"};
  
  if (num < 4000) {
    
     if (num >= 1000) {
        printf("%s", fourth[num/1000]);
        num %= 1000 / 100;
    }

    if (num >= 100) {
        printf("%s", third[num/100]);
        num %= 100 / 10;
    }

    if (num >= 20) {
        printf("%s", second[num/10]);
        num %= 10;
    }
    
        printf("%s", first[num]);
    
  } else {
    printf("Number is too large");
  }
}