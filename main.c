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
      printf("Your letter grade for CMPSC 131 is: A.\n");
   }
  else if (grade >= 90 &&  grade < 93){
      printf("Your letter grade for CMPSC 131 is: A-.\n");
  }
  else if (grade >= 87 && grade < 90) {
     printf("Your letter grade for CMPSC 131 is: B+.\n");
  }
  else if (grade >= 83 && grade < 87) {
     printf("Your letter grade for CMPSC 131 is: B.\n");
  }  
  else if (grade >= 80 && grade < 83) {
     printf("Your letter grade for CMPSC 131 is: B-.\n");
  } 
  else if (grade >= 77 && grade < 80) {
     printf("Your letter grade for CMPSC 131 is: C+.\n");
  }
  else if (grade >= 70 && grade < 77) {
     printf("Your letter grade for CMPSC 131 is: C.\n");
  }
  else if (grade >= 60 && grade < 70) {
     printf("Your letter grade for CMPSC 131 is: D.\n");
  }
  else if (60 < grade){
     printf("Your letter grade for CMPSC 131 is: F.\n");
  }  
  else {
    printf("Your letter grade for CMPSC 131 is: F.\n");
  }

  return 0;
}