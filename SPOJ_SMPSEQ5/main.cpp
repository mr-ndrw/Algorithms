#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main() {

    int firstArraySize, secondArraySize;

    cin >> firstArraySize;

    int * firstArray = new int[firstArraySize];

    int readInt;

    for (int i = 0; i < firstArraySize; ++i) {
        cin >> readInt;
        firstArray[i] = readInt;
    }

    cin >> secondArraySize;

    int * secondArray = new int[secondArraySize];

    for (int i = 0; i < secondArraySize; ++i) {
        cin >> readInt;
        secondArray[i] = readInt;
    }

    int size = firstArraySize >= secondArraySize ? secondArraySize : firstArraySize;

    list<int> result;

    for(int i = 0 ; i < size; ++i){
        if (firstArray[i] == secondArray[i]){
            result.push_back(i+1);
        }
    }

    for(list<int>::iterator it = result.begin(); it != result.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}