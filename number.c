#include<stdio.h>

int main(){
  
  int n, sum = 0;
  
  printf("Enter number: ");
  int _= scanf("%d", &n);
  
  for(int i = 1; i <= n; i++){
    //printf("%d \n",i);
    
    if(n % i == 0) {
      printf("  %d \n", i);
      sum += i;
    }
  }
  
  printf("\n");
  
  sum = sum - n;
  
  printf("Before Calculation number: %d\n\n", sum);
  
  if(sum == n){
    printf("Perfect number is: %d\n", sum);
  }else if(sum > n){
    printf("Abundant number is : %d", sum);
  }else{
    printf("Defecint number is : %d", sum);
  }
  
  return 0;
}