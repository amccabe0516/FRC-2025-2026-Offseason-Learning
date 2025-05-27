#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <chrono>
#include <thread>

bool enterance_answer;
bool answer_yes;
bool answer_no;

void Run_program(){
    int user_guess;
    int dice_roll = rand() % 6 + 1;

    std::cout << "Please enter your guess:" << '\n';
    std::cin >> user_guess;

    std::cout << "Rolling the dice in..."<< "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));  
    std::cout << "3 ";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));  
    std::cout << "2 ";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));  
    std::cout << "1 ";

    std::cout << "The dice landed on " << dice_roll << '\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));  
    if(dice_roll == user_guess){
        std::cout << "YOU WON!";
    }
    else {
        std::cout << "YOU" << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
        std::cout << "LOST" << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
        std::cout << "YOU" << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
        std::cout << "BUM!" << '\n';
    }
}



int main(){
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    std::string user_input;
    
    std::cout << "Hello! Welcome to the Dice Game" << '\n';
    std::cout << "Would You like to play? (Yes/No):"<< '\n';
    std::cin >> user_input;

    if(user_input == "Yes") {
        Run_program();
}
    else {
        std::cout << "That sucks...your playing" << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(1500)); 
        Run_program();
    }
}


    
