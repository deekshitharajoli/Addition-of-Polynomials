#include <deepstate/DeepState.hpp>
#include "polynomial.h"

using namespace deepstate;

TEST(Polynomial, Addition) {
  struct Node *poly1 = NULL, *poly2 = NULL, *result = NULL;

  // Create first list of 5x^2 + 4x^1 + 2x^0
  create_node(5, 2, &poly1);
  create_node(4, 1, &poly1);
  create_node(2, 0, &poly1);

  // Create second list of -5x^1 - 5x^0
  create_node(-5, 1, &poly2);
  create_node(-5, 0, &poly2);

  LOG(TRACE) << "1st Number: ";
  show(poly1);
  LOG(TRACE) << "2nd Number: ";
  show(poly2);

  result = (struct Node *)malloc(sizeof(struct Node));

  // Function add two polynomial numbers
  polyadd(poly1, poly2, result);

  LOG(TRACE) << "Added polynomial: ";
  show(result);

  free(poly1);
  free(poly2);
  free(result);
}