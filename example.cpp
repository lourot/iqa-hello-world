extern "C"
{
#include "iqa.h"
}

#include <iostream>

static const int IMAGE_WIDTH = 10;
static const int IMAGE_HEIGHT = 10;

int main()
{
  std::cout << "--- Create image" << std::endl;
  unsigned char image[IMAGE_HEIGHT * IMAGE_WIDTH];
  for (int heightIt = 0; heightIt < IMAGE_HEIGHT; ++heightIt)
  {
    for (int widthIt = 0; widthIt < IMAGE_WIDTH; ++widthIt)
    {
      image[IMAGE_WIDTH * heightIt + widthIt] = IMAGE_WIDTH * heightIt + widthIt;
    }
  }

  std::cout << "--- Perform the Mean Squared Error of the image with itself" << std::endl;
  const float result = iqa_mse(image, image, IMAGE_WIDTH, IMAGE_HEIGHT, IMAGE_WIDTH);
  std::cout << "Result: " << result << std::endl;

  return 0;
}
