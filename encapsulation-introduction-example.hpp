#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

class Example {
  private:
    int data; // Private variable, only accessible within the class

  public:
    // Constructor to initialize data
    Example(int value);

    // Public method to access private data
    int getData() const;
};

#endif
