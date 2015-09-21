#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> firstSet, secondSet;

    int firstSetCount, secondSetCount;

    int readInt;

    cin >> firstSetCount;

    for (int i = 0; i < firstSetCount; ++i) {
        cin >> readInt;
        firstSet.insert(readInt);
    }

    cin >> secondSetCount;

    for (int j = 0; j < secondSetCount; ++j) {
        cin >> readInt;
        secondSet.insert(readInt);
    }

    for(set<int>::iterator it = secondSet.begin(); it != secondSet.end(); ++it){
        set<int>::iterator whatWasFound = firstSet.find(*it);

        if(whatWasFound != firstSet.end()){
            firstSet.erase(whatWasFound);
        }
    }

    for(set<int>::iterator it = firstSet.begin(); it != firstSet.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}