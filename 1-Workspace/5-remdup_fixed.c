#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main(void) {
  int nums[10] = {0, 0, 0, 1, 1, 2, 2, 5, 5, 7};
  int size = removeDuplicates(nums, 10);
  for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }

  return 0;
}

int removeDuplicates(int* nums, int numsSize){
    //Тук curel беше инициализирано като char, а това не е необходимо.
    char curel = nums[0];
    int k = 1;
    for (int i = 1; i < numsSize; i++) {
      //Преди if условието имаше >=, което създава още една ненужна допълнителна итерация на ифа, затова се използва само >.
        if (nums[i] > curel) {
            nums[k] = nums[i];
            curel = nums[k];
            k++;
        }
    }
    return k;
}