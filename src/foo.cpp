#include "foo.hpp"

#include "bar.hpp"

#include <iostream>

#include <QString>
#include <QDebug>

int foo(int a, int b) {
  std::cout << "Running foo...\n";
  return a + b;
}

int fooQt() {
  QString stringTest = "working";
  qDebug() << "Qt working...?" << stringTest;

  return 0;
}

int fooZip() {
  return barZip();
}
