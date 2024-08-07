// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() 
         << " capacity: " << vec.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);
        cout << "vec: size: " << vec.size() 
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}

//--------------------------Exercise 2.1-------------------------------
// 1. a vector size refers to the number of elements stored in a vector. vector's capacity refers to the number of elements that a vector can carry at the current memory allocation
// 2. By doubling, a vector's capacity grows to accommodate more elements efficiently, minimizing the need for frequent memory allocations and copies as new elements are added.
