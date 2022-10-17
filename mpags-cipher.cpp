#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc};

    for (size_t i{0}; i < cmdLineArgs.size(); i++) {
        std::cout << cmdLineArgs[i] << std::endl;
        if(cmdLineArgs[i] == "-h") {
            std::cout << "Help text" << std::endl; 
        }
    
    }
    
    char in_char{'x'};
    std::string out_str{""};

    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {   //loop until the user presses
        //Enter then ctrl+d
        //covert lowercase input to uppercase
        if (std::isalpha(in_char)) {
            out_str += std::toupper(in_char);
            continue;
        }
        //change numbers to letters (uppercase)
        switch (in_char)
        {
            case '1':
                out_str += "ONE";
                break;
            case '2':
                out_str += "TWO";
                break;
            case '3':
                out_str += "THREE";
                break;
            case '4':
                out_str += "FOUR";
                break;
            case '5':
                out_str += "FIVE";
                break;
            case '6':
                out_str += "SIX";
                break;
            case '7':
                out_str += "SEVEN";
                break;
            case '8':
                out_str += "EIGHT";
                break;
            case '9':
                out_str += "NINE";
                break;
            case '0':
                out_str += "ZERO";
                break;
            default:
                //do nothing
                break;
        }   
        // if the input isnt a character or number, ignore it
        if (std::isalpha(in_char) == false) {
            continue;
        }
    }
    //print out the new string
    std::cout << out_str << std::endl;
    
}