#include "add.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

void test_add_int_1() {
    // Arrange
    int a = 110;
    int b = 10;
  
    // Act
    int res = max(a, b);
  
    // Assert
    assert(110 == res);
    printf("res = %d", res);
  }

  int main() {
    test_add_int_1();
    return 0;
  }
