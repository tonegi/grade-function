#include <stdio.h>

char letterGrade(double numericalGrade);

int main(void) {
  double numericalGrade = 0;
    printf("Enter the student's final numerical grade: ");
   scanf("%lf", &numericalGrade);
  printf("%c", letterGrade(numericalGrade));
  
  return 0;
}

char letterGrade(double numericalGrade){
  if(numericalGrade >= 0.0 && numericalGrade <= 4.9) 
    return 'D';
  else if(numericalGrade >= 5.0 && numericalGrade <= 6.9)
    return 'C';
  else if(numericalGrade >= 7.0 && numericalGrade <= 8.9)
    return 'B';
  else if(numericalGrade >= 9.0 && numericalGrade <= 10)
    return 'A';
  else
    return '?';
}
