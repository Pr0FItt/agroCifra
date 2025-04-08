#include <iostream>
#include "Number.h"
int main() {
	std::vector<int> arr = {2, 3, 6, 18};
	std::cout << Number::numFactoredBinaryTrees(arr);
}