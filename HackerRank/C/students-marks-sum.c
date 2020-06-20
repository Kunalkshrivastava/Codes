//Students Marks Sum

//Complete the following function.
int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i,s =0;
    if(gender == 'b')
        i = 0;
    else
        i = 1;
        
  while(i< number_of_students)
  {
      s = s+ marks[i];
      i =i +2;
  }
  return s;
}

