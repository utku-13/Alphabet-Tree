//
//  main.cpp
//  Alphabet Tree
//
//  Created by Utku Özer on 26.10.2023.
//

#include <iostream>
#include <string>


int main()
{
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};
        
    for (char c:letters){
        
        size_t num_gap = num_letters - position;
        while (num_gap > 1){
            std::cout << " ";
            num_gap--;
        }
        
        for (int j = 0; j < position; j++)
            {
                std::cout << letters.at(j);
            }
        
        
        std::cout << letters.at(position);
        
        
        for (size_t i {1}; i < position + 1 ; i++){
            std::cout << letters.at(position - i);
        }
        
        std::cout << std::endl;
        
        position++;
        
    }
    

        
    
    
    return 0;
    
}
