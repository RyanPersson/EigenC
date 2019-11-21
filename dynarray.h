#ifndef __DYNARRAY_HPP
#define __DYNARRAY_HPP

template <class T>
class Dynarray {
private:
  T* data;
  int n;
  int capacity;
public:
  Dynarray();
  ~Dynarray();
  int size() { return this->n; };
  void add(T v);
  T get(int i);
};

template <class T>
Dynarray<T>::Dynarray() {
  this->data = new T[8];
  this->n = 0;
  this->capacity = 8;
}

template <class T>
Dynarray<T>::~Dynarray() {
  delete[] this->data;
}

template <class T>
void Dynarray<T>::add(T v) {
  /*
   * If we don't have enough space in the current array to add another item,
   * then double the size of the array by creating a new array and copying the
   * old data over to it.
   */
  if (this->n == this->capacity) {
    int new_capacity = 2 * this->capacity;
    T* new_data = new T[new_capacity];
    for (int i = 0; i < this->n; i++) {
      new_data[i] = this->data[i];
    }
    delete[] this->data;
    this->data = new_data;
    this->capacity = new_capacity;
  }

  this->data[this->n++] = v;
}

/*
 * Returns the array value stored at a specified index.  Does not error check
 * the index, so you need to make sure it's within the bounds of the array
 * before calling this function.
 */
template <class T>
T Dynarray<T>::get(int i) {
  return this->data[i];
}

#endif