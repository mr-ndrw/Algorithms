#include <iostream>
#include <list>
using namespace std;

list<int> * processNumbers(int upperBound, int divisble, int nonDivisble);

int main() {

    int numberOfTestCases;

    cin >> numberOfTestCases;

    list<int> * list;
    int upperBound, divisible, nonDivisible;
    for (int i = 0; i < numberOfTestCases; ++i) {
        cin >> upperBound >> divisible >> nonDivisible;

        list = processNumbers(upperBound, divisible, nonDivisible);

//        cout << list->empty() << endl;

        while(!list->empty()){
            cout << list->front() << endl;
            list->pop_front();
        }
    }
    return 0;
}

list<int> * processNumbers(int upperBound, int divisble, int nonDivisble){

    list<int> * result = new list<int>();

    for (int i = 1; i < upperBound; ++i) {
        /*cout << i << endl;
        cout << (i % divisble == 0) << endl;
        cout << (i % nonDivisble != 0) << endl << endl;*/
        if(i % divisble == 0 && i % nonDivisble != 0) {
            result -> push_back(i);
        }
    }

    return result;
}


