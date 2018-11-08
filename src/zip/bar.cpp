#include "bar.hpp"

#include <iostream>
#include <Zip.h>

int barZip() {
  zip_t *zip = zip_open("not-existent.zip", ZIP_CHECKCONS, NULL);

  std::cout << "Zip tested!\n";

  return 0;
}
