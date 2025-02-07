#include <iostream> // reading in a library... equivalent of import in python
#include <string>

// Note, C++ is strongly typed.

int main(){
    std::cout << "hello"; // prints "hello" to the screen
    std::cout << '\n' << 3*17 ; // you can stack outputs to the screen
    std::cout << '\n' << 3.0/7.5;
    std::cout << '\n' << "bye!\n";

    int limit = 17;

    std::cout << "limit:" << limit *2 << '\n'<< "Enter a Number: ";
    std::cin >> limit; // reading in values from the user
    std::cout << "\nlimit:" << limit;

    std::string part;
    std::cout << "\nUse \'FC\' : flow control. \n\'FH\' : Functions and Headers. \n\'SC\' : Strings and Collections."
    "\n\'GNG\' : Guess the number game";
    std::cout << "\nWhat do you want to test: ";
    std::cin >> part;


    if (part == "FC"){
        // Conditions and Loops

        int num1, num2;
        std::cout << "\nEnter a number: ";
        std::cin >> num1;
        std::cout << "\nEnter another number: ";
        std::cin >> num2;

        if (num1 > num2){
            std::cout <<'\n' << num1 << " is greater than " << num2;
        } else if (num1 < num2){
            std::cout << '\n' << num1 << " is less than " << num2;
        }


        bool check = true;
        while(check){
            std::cout << "\n************* Check is " << check;
            for(float i=0.0; i<10.0; i++){
                std::cout << "\nNumber " << i;
                if (i/2 > 3.0){
                    std::cout << "\nNumber ";
                    check = false;
                }
            }
        }
    } else if(part == "GNG"){
        int my_number = 448;
        int your_guess;
        char try_again = 'Y';
        while (try_again == 'Y'){
            std::cout << "Guess my Number between 0 and 1000: ";
            std::cin >> your_guess;
            if(my_number > your_guess){
                std::cout << "Your Guess is lower than my number";
                std::cout << "\nDo you want to try again? Y/N: ";
                std::cin >> try_again;
            } else if(my_number < your_guess){
                std::cout << "Your guess is higher than my number";
                std::cout << "\nDo you want to try again? Y/N: ";
                std::cin >> try_again;
            }else{
                std::cout << "\nCorrect! You are a genius!";
            }
        }
    }



    return 0;

}



