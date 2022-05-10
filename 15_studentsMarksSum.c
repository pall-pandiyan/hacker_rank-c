//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum = 0, student;
  
  if(gender == 'b') {
    student = 0;
  } else if(gender == 'g') {
      student = 1;
  }
  
  for(; student<number_of_students; student+=2) {
      sum += *(marks+student);
  }
  return sum;
}

