#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> numbers = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};
    for(int pow = 0; pow<numbers.size(); pow++){
        numbers.push_back(numbers[0]);
        numbers.erase(numbers.begin());
    }
    for(int i =0; i<numbers.size(); i++){
        if(numbers[i] %2 != 0){
            std::cout<<numbers[i]<<" ";
        }
        for(int j =i; j!=numbers.size(); j--){
            j+=2;
            
        }
    }
}