#include <iostream>
#include <vector>

using namespace std;

bool placeFlower(vector<int>& flowerbed, int count) {
    if (count == 0) return true;

    // basic
    int size = flowerbed.size();
    if (size == 1 && flowerbed[0] == 0) return true;
    if (size == 1) return false;
    
    // main algoritm
    int pointer = 0;
    while (pointer < size) {
        // check one
        if (flowerbed[pointer] == 1) {
            pointer += 2;
            continue;
        }

        // check zeros 
        if (pointer - 1 < 0 && flowerbed[pointer + 1] == 0) --count;
        else if (pointer + 1 >= size && flowerbed[pointer - 1] == 0) --count;
        else if (pointer - 1 >= 0 && pointer + 1 < size && flowerbed[pointer - 1] == 0 && flowerbed[pointer + 1] == 0) --count;
        else --pointer;
        pointer += 2; 
    }
    if (count <= 0) return true;
    return false;
}

int main () {
    vector<int>* array = new vector<int>{1, 0, 0, 0, 1};
    int num = 2;
    
    // call func
    cout << "Answer: " << placeFlower(*array, num) << endl;

    delete array;
    return 1;
}
