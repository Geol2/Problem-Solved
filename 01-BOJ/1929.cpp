#include <iostream>

bool isPrimeInt(int num) {
    if(num <= 1)
        return false;
    for(int j = 2; j*j <= num; j++) {
        if(num%j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start_num;
    int end_num;
    int result;
    
    std::cin >> start_num;
    std::cin >> end_num;
    for(int i = start_num; i <= end_num; i++) {
        result = isPrimeInt(i);
        if(result == true)
            std::cout << i << "\n";
    }
    return 0;
}
