#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <hostname>" << std::endl;
        return 1;
    }

    std::string host = argv[1];
    std::string command = "traceroute " + host;

    int result = system(command.c_str());
    
    if (result != 0) {
        std::cerr << "Traceroute failed" << std::endl;
        return 1;
    }

    return 0;
}