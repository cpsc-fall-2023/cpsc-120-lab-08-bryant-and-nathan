// Nathan Aguilar
// naguilar04@csu.fullerton.edu
// @NateAnomalyV2
// Partners: @bryantchen61

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that the number of arguments is correct.
    if (arguments.size() != 4) {
    std::cout << "error: you must supply 3 arguments";
    return 1;
  }
  // If not, print an error message and return a non-zero value.

  // TODO: Declare three std::string variables to hold the
  std::string protein(arguments.at(1));
  std::string bread(arguments.at(2));
  std::string condiment(arguments.at(3));
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".";
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.

  // TODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.

  return 0;
}
