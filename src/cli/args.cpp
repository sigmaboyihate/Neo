#include <iostream>

void helpflag(){
    std::cout<<"You can read more in https://github.com/sigmaboyihate/Neo\n";
    std::cout<<"----------------------\n";
    std::cout<<"neo get <package>\n";
    std::cout<<"neo sync\n";
    std::cout<<"neo update\n";
    std::cout<<"neo remove <package>\n";
    std::cout<<"----------------------\n";
}

int main(int argc, char *argv[]){
    char answer; // this is logic for "are you sure you want to install? Y/n"

    if (argc != 3){
        std::cout<<"Incorrect usage, for help do 'neo --help' \n";
        return 1;
    }

    std::string command = argv[1];

    if (command == "--help"){
        helpflag();
        return 1;
    }

    if (command == "get"){
        if (argc != 3){
            std::cout<<"No package specified, Usage: neo get <package>\n";
            return 1;
        }
        std::string pkg = argv[2];
        std::cout << "Are you sure you want to install " << pkg << "? y/n: ";
        
        std::cin >> answer;

        
        if (answer == 'y'){ 
            std::cout<<"Installing package...\n";
            // logic comes later fellas
            // way later
        } else if (answer == 'n') {
            std::cout<<"Package installation aborted.\n";
            return 1;
        } else {
            std::cout<< answer << " Was not recognized as an option.";
        }
        

    }

}