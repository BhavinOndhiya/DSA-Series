#include <iostream>
using namespace std;
 
class Array{
 //using pointers to assign a value to an array of variable size
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
     //assigning variable value to an array and defining size of array at runtime
     
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display(){
     //a function to print my data stored in an array
     
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
 
    ~Array(){
     //after using array deleting the array
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
    //calling the functions
    
    Array arr(10);
    arr.create();
    arr.display();
 
 
    return 0;
}
