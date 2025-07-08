#include <iostream>
#include <fstream>


int main() {

    std::string fileName;
    std::cin >> fileName;
    std::string cloneURL;

    std::cout << "Enter URL: " << "\n";
    std::cin >> cloneURL;

    if (std::ofstream file(fileName); file.is_open()) {

        file << "git clone " << cloneURL;
        file << "git add . \n";
        file << "git commit -m 'Added Code' \n";
        file << "git push \n";

        file.close();

    }

}

