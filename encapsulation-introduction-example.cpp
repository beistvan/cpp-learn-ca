#include "Example.hpp"

// Constructor to initialize data
Example::Example(int value) : data(value) {}

// Public method to access private data
int Example::getData() const {
    return data;
}
