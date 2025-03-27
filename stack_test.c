#include "stack.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

void test_stack_1() {
  // Arrange
  pushFront(stack, 10);
  pushBack(stack, 20);
  pushMiddle(stack, 15, 1);

  //Act

  // Assert
  assert(10 == findElement(stack, 0));
}

void test_stack_2(){
  pushFront(stack, 30);
  pushBack(stack, 25);
  pushMiddle(stack, 15, 0);

  assert(30 == findElement(stack, 1));
}

int main() {
  Stack* stack = createStack();
  test_stack_1();
  test_stack_2();


  // printf("Количество элементов: %d\n", countElements(stack));

  // pop(stack, 1); это удаление
  // printf("Количество элементов после удаления: %d\n", countElements(stack));

  freeStack(stack);

  return 0;
}
