#include <ctype.h>
#include <stdio.h>
#include <string.h>

void count_words(char *sentence);

int main() {
  
  char sentence[1000];
  
  printf("Enter sencence: ");
  char _= scanf("%[^\n]", sentence);
  
  count_words(sentence);
  
  return 0;
}

void count_words(char *sentence) {
  
  char *word;
  char *punctuations = " \t\n\r\f\v.,:;?!-\"\()[]{}";
  int word_count = 0;
  char *word_list[100];
  int count_list[100];
  int i;
  
  word = strtok(sentence, punctuations);
  while (word != NULL) {
    
    for (i = 0; word[i]; i++) {
      word[i] = tolower(word[i]);
    }
    
    while (ispunct(word == 0)) {
      word++;
    }
    for (i = strlen(word) - 1; i >= 0 && ispunct(word[i]); i--) {
      word[i] = '\0';
    }
    
    for (i = 0; i < word_count; i++) {
      if (strcmp(word, word_list[i]) == 0) {
        count_list[i]++;
        break;
      }
    }
    
    if (i == word_count) {
      word_list[word_count] = word;
      count_list[word_count] = 1;
      word_count++;
    }
    
    word = strtok(NULL, punctuations);
  }

  for (i = 0; i < word_count; i++) {
    printf("%s: %d\n", word_list[i], count_list[i]);
  }
}