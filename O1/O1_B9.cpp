#include <iostream>
#include <vector>

int main(){
    
    std::vector <int> i = {1,2,3,5,2,1345,63,56,3,6626,2556,342,5345,55,44,33,223,863,24,52,98,888};

    for(int numbers =0; numbers<i.size(); numbers++){
        if(i[numbers] %2 != 0){
            std::cout<<i[numbers]<<" ";
        }
    }
}