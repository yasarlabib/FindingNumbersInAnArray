include <stdio.h>

int main(void) {

  const int SIZE = 10; //intializing and declaring the size of the array (change to however many numbers you have)
  //intializing and declaring the numbers array, the temporary value, the target value, the first index, the last index, and the middle index
  int numbers[SIZE], temp = 0, target = 0, first = 0, last = 0, middle = 0;

  //user inputs numbers
  for(int i = 0; i < SIZE; ++i){
  printf("Input the number you would like to use: ");
  scanf("%d", &numbers[i]);
  printf("\n");
  }

  printf("Unsorted array: "); //print user's unsorted list of numbers 
  for(int i = 0; i < SIZE; ++i){
    printf("%d ", numbers[i]);
  }

  //use bubble sort to sort the array in ascending order
  for(int i = 0; i < SIZE; i++){
    for(int j = i + 1; j < SIZE; j++){
      if(numbers[i] > numbers[j]){
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }

  printf("\n\n"); //formatting

  printf("Array in ascending order: "); //print array in ascending order
  for(int i = 0; i < SIZE; ++i){
    printf("%d ", numbers[i]);
  }

  //prompt user to ask what number they are looking for 
  printf("\n\nWhat number are you looking for?\n");
  scanf("%d", &target);

  //linear search
  printf("Search using linear search: ");
  for(int i = 0; i < SIZE; i++){
    if(numbers[i] == target){
      printf("Found\n"); //if target number is found
      return 0;
    }
  }
  printf("Not found\n"); //if target number is not found
  return -1;

  //binary search 
  printf("Search using binary search: ");
  last = SIZE - 1;
  middle = (first+last)/2;
  while(first <= last){
    if(numbers[middle] < target)
      first = middle + 1;
    else if(numbers[middle] == target){
      printf("Found\n"); //if target number is found
      break;
    }
    else
      last = middle - 1;
    middle = (first + last)/2;
  }
  if(first > last)
    printf("Not found\n"); //if target number is not found

}
