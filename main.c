//Author: Jocelyn Fafard jqf5530@psu.edu
//Collaborator: Andrei Charles Dawinan abd5635@psu.edu
//Collaborator: Michael Scarpitta mss6102@psu.edu
//Collaborator: Jerry Diaz jqd5879@psu.edu
//Section: 012R
//Breakout: 14

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *letterGrade = readline("Enter your CMPSC 131 grade: ");
  
  double grade = atof(letterGrade);

  if (grade >= 93){
     printf("A");
   }
  else if (grade >= 90 &&  grade < 93){
    printf( "A-");
  }
  else if (grade >= 87 && grade < 90) {
    printf("B+");
  }
  else if (grade >= 83 && grade < 87) {
    printf("B");
  }  
  else if (grade >= 80 && grade < 83) {
    printf("B-");
  } 
  else if (grade >= 77 && grade < 80) {
    printf("C+");
  }
  else if (grade >= 70 && grade < 77) {
    printf("C");
  }
  else if (grade >= 60 && grade < 70) {
    printf("D");
  }
  else if (60 < grade){
    printf("F");
  }  
  else {
    printf("F");
  }
  
  printf("Your letter grade for CMPSC 131 is: ");
  return 0;
}