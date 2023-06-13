#include <iostream>
#include <vector>

using namespace std;

bool placeFlower(vector<int>& flowerbed, int count) {
    if (count == 0) return true;
    int size = fbed.size();
    for (int i = 0; i < size; ++i) {
        if (fbed[i] == 0 && (i - 1 < 0 || fbed[i - 1] == 0) && (i + 1 >= size || fbed[i + 1] == 0)) {
            fbed[i] = 1;
            --count;
            ++i;
        }
    }
    return count <= 0;
}

int main () {
    vector<int>* array = new vector<int>{1, 0, 0, 0, 1};
    int num = 2;
    
    // call func
    cout << "Answer: " << placeFlower(*array, num) << endl;

    delete array;
    return 1;
}
