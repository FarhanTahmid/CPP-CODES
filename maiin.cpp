#include <iostream>
using namespace std;

int main() {

    int rows;

    std::cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            if(i%2==0){
                std::cout << "$ ";
            }else{
                std::cout<<"* ";
            }   
        }
        std::cout << "\n";
    }
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            if(i%2==0){
                std::cout << "$ ";
            }else{
                std::cout<<"* ";
            }   
        }
        std::cout << "\n";
    }
    return 0;
}
