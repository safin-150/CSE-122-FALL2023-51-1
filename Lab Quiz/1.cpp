#include <iostream>
using namespace std;

class Array {
private:
    int iArray[100];
    char cArray[100];
    double fArray[100];
    int iIndex = 0;
    int cIndex = 0;
    int fIndex = 0;

public:

    void insert(int index, int value) {
        if (index >= 0 && index <= iIndex){
            iArray[index] = value;
            iIndex++;
        }
    }

    void insert(int index, char value) {
        if (index >= 0 && index <= cIndex){
            cArray[index] = value;
            cIndex++;
        }
    }


    void insert(int index, double value) {
        if (index >= 0 && index <= fIndex){
            fArray[index] = value;
            fIndex++;
        }
    }


    void display() {

        for (int i = 0; i < iIndex; i++) {
            cout << iArray[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < cIndex; i++) {
            cout << cArray[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < fIndex; i++) {
            cout << fArray[i] << " ";
        }
        cout<<endl<<endl;
    }
};

int main() {
    Array arr1;

    arr1.insert(0, 10);
    arr1.insert(0, 'a');
    arr1.insert(0, 1.1);


    arr1.display();

    return 0;
}
