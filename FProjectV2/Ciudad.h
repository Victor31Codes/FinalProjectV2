#ifndef CIUDAD_H
#define CIUDAD_H

#include <string>

class Ciudad {
private:
  std::string nombre;

public:
  void setNombre(const std::string& nombre);
  std::string getNombre() const;
};

#endif

