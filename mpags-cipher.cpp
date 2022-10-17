#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc};
    std::string version {"Hello"};
    std::string inputFile {"Hello"};
    std::string outputFile {"Hello"};

    //first print all the cmdLineArgs out
    for (size_t i{1}; i < cmdLineArgs.size(); i++) {
        std::cout << cmdLineArgs[i]  << std::endl;
        //search for help inputs and print help message if there
        if (cmdLineArgs[i] == "-h"){ 
            std::cout << "Help Text" << std::endl; 
            continue;
        }
        else if (cmdLineArgs[i] == "--help"){
            std::cout << "Help Text" << std::endl;
            continue;
        }

        //search for version input and print out the version if there
        else if (cmdLineArgs[i] == "--version"){
            std::cout << "Version: " << std::endl; 
            continue;
        }
        //search for -o input and print output file name if there
        else if (cmdLineArgs[i] == "-o"){
            outputFile = cmdLineArgs[i+1];
            std::cout <<"File Name: " + outputFile << std::endl;
            i++;
            continue;
        }
        
        //search for -i input and print input file name if there
        else if (cmdLineArgs[i] == "-i"){
            inputFile = cmdLineArgs[i+1];
            std::cout << "File Name: " + inputFile << std::endl;
            i++;
            continue;
        }

        //if no arguments above in command line, print message then exit
        else{
            std::cout << "Problem parsing command line arguments - exiting program" << std::endl;
            return(0);
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