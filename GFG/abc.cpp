#include <iostream>

template <class T>
class Vec {
private:
    int size;
    T* arr;

public:
    Vec();
    Vec(int size);
    Vec(int size, T val);
    ~Vec();
    Vec(const Vec& a);
    Vec& operator=(const Vec& a);
    void printVec();
    Vec& operator+(const Vec& a);
};

template <class T>
Vec<T>::Vec() {
    int defaultSize = 4;
    arr = new T[defaultSize];
    size = defaultSize;
    std::cout << "Default constructor called\n with memory address" << arr << std::endl;
}

template <class T>
Vec<T>::Vec(int s) {
    arr = new T[s];
    size = s;
    std::cout << "\n parameterized constructor called\nwith memory address" << arr << std::endl;
}

template <class T>
Vec<T>::Vec(int s, T val) {
    arr = new T[s];
    size = s;
    for (int i = 0; i < size; i++) {
        arr[i] = val;
    }
    std::cout << "\n dual param constructor called with value : " << val << "\n and memory address" << arr << std::endl;
}

template <class T>
Vec<T>::~Vec() {
    delete[] arr;
    std::cout << "Destructor for feeing memory called successfully\n freed from adress :" << arr << std::endl;
}

template <class T>
Vec<T>::Vec(const Vec& a) {
    Vec k(a.size);
    arr = new T[k.size];
    for (int i = 0; i < k.size; i++) {
        k.arr[i] = a.arr[i];
    }
}

template <class T>
Vec<T>& Vec<T>::operator=(const Vec& a) {
    size = a.size;
    delete[] arr;
    arr = new T[size];
    for (int i = 0; i < size; i++) {
        arr[i] = a.arr[i];
    }
    return *this;
}

template <class T>
void Vec<T>::printVec() {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "  ";
    }
    std::cout << " ]";
}

template <class T>
Vec<T>& Vec<T>::operator+(const Vec& a) {
    if (size == a.size) {
        for (int i = 0; i < size; i++) {
            arr[i] += a.arr[i];
        }
        return *this;
    } else {
        std::cout << "\n Please enter vectors with same size" << std::endl;
        return *this;
    }
}

int main() {
    std:: cout << "Default size is 4\n" << std::endl;
    Vec<int> v; // i have taken default size as 4
    Vec<int> v0(6);
    Vec<int> v1(3, 5);
    Vec<int> v2(3, 4);

    v.printVec();
    std::cout << std::endl;
    v0.printVec();
    std::cout << std::endl;

    v1.printVec();
    std::cout << std::endl;
    v2.printVec();
    std::cout << std::endl;
    (v1 + v2).printVec();
    std::cout << std::endl;

    v0 = v1;
    v0.printVec();
    std::cout << std::endl;

    return 0;
}