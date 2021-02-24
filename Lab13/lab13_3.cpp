#include <iostream>
using namespace std;

// prototypes and their brief descriptions

// this function dynamically creates an array in memory
int* createArray(int);

// This function reverses the contents of the array. To do so,
// create another array (of the same size), and transfer the contents to it
// in inverted order.
// 1st parameter: pointer to the dynamic array, 2nd parameter: size of array
void reverseArray(int* &, int);

// This function prints the contents of the array.
// 1st parameter: pointer to the dynamic array, 2nd parameter: size of array
void printArray(int*, int);

// This function checks if a value exists in the array. If it exists,
// return the location in array
// 1st parameter: pointer to the dynamic array, 2nd parameter: size of array
// 3rd parameter: the value to be searched
int findInArray(int*, int, int);

// This function checks if a value exists in the array, and proceeds to
// replace it with a new value
// 1st parameter: pointer to the dynamic array, 2nd parameter: size of array
// 3rd parameter: the value to be searched, 4th parameter: the replacement value
bool replaceInArray(int*, int, int, int);

// This function expands the array size two times its original size.
// Create a new array that is double the original size, then copy over
// the contents of the original array. Ensure the new array is passed back.
// 1st parameter: pointer to the dynamic array, 2nd parameter: size of array
void expandArray(int* &, int&);

// MAIN FUNCTION does not need any modifications
int main() {
    int *ptr;
    int size = 10;

    ptr = createArray(size);

    for (int i=0; i<size; i++)
        ptr[i] = i;

    printArray(ptr, size);
    reverseArray(ptr, size);
    printArray(ptr, size);

    int value = 7;

    int loc = findInArray(ptr, size, value);

    if (loc == -1)
        cout << "The value " << value << " does not exist in the array." << endl;
    else
        cout << "The value " << value << " is found at location " << loc
             << " of the array." << endl << endl;
    if (replaceInArray(ptr, size, value, 99)) {
        printArray(ptr, size);
        cout << "The value " << value << " has been replaced." << endl;
    }

    expandArray(ptr, size);

    cout << "\nAfter expanding, the array now has size " << size << endl;

    printArray(ptr, size);
}
/////////////////////////////////////////////////////////////////////////////
// function definitions

int* createArray(int n) {
    return new int[n];
}

void printArray(int* ptr, int size) {
    cout << "Array: ";
    for(int i=0; i<size;i++)
        cout << ptr[i] << " ";

    cout << endl;
}

void reverseArray(int* &ptr, int size) {
    int* start = ptr;
    int* last = ptr+size-1;
    while (start<last){
        swap(*start, *last);
        start++;
        last--;
    }
}

int findInArray(int* ptr, int size, int value) {
    for(int i=0; i<size; i++)
    {
        if(value == ptr[i])
            return i;
    }
    return -1;
}

bool replaceInArray(int* ptr, int size, int value, int replacement) {
    for(int i=0; i<size; i++)
    {
        if(value == ptr[i])
            ptr[i] = replacement;    
    }
    return false;
}

void expandArray(int* &ptr, int &size)
{
    // fill up
    //create an array with double the size
    int *newArr = new int[size*2];
    //copy the data into the new array
    for(int i=0; i<size;i++)
        newArr[i] = ptr[i];

    for(int i=size; i<size*2;i++)
        newArr[i] = 0;
    //free ptr/remove the content 
    delete [] ptr;
    //point ptr to the new array, paste the new content
    ptr = newArr;

    //update the new size at the end, once ptr is changed
    size = 2* size;
}