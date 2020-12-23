#include <iostream>
#include <string.h>

using namespace std;

class Record{
    public:
        int count;
        int a;
        int b;
        int c;
        int d;
        int e;
        void mCount(int count);
};

void Record::mCount(int count) {
    this->count = count;
};

class ClassRecord : public Record {
    public:
        int *mScores;
        int mCount;

        int count;

        ClassRecord(const int *scores, int count);
};

ClassRecord::ClassRecord(const int *scores, int count) : mCount(count) {
    mScores = new int[mCount];
    memcpy(mScores, scores, mCount * sizeof(int));
};

ClassRecord::ClassRecord(const ClassRecord& other) : mCount(other.mCount), mScores(other.mScores) {

};

int main() {
    int number = 50;
    int *scores = &number;

    ClassRecord ClassRecord(scores, 1);
    
    ClassRecord * ClassRecordCopy = new ClassRecord(ClassRecord);
    
    delete ClassRecordCopy;

    return 0;
}