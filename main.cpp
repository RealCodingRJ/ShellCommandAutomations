#include <iostream>
#include <fstream>
#include <Windows.h>


int main() {
    std::string fileName;
    std::cin >> fileName;
    std::string cloneURL;


    if (std::ofstream file(fileName); file.is_open()) {
        std::string commandRouteRunnable;

        file << "git clone " << cloneURL;
        file << "git add . \n";
        file << "git commit -m 'Added Code' \n";
        file << "git push \n";

        file.close();

        std::cout << "Enter Route: " << "\n";
        std::cin >> commandRouteRunnable;

        if (commandRouteRunnable == "/Clone") {

            std::cout << "Enter Github URL: " << "\n";
            std::cin >> cloneURL;

            ShellExecuteA(nullptr,
            "open",cloneURL.c_str(),
            nullptr, nullptr, SW_SHOWDEFAULT);
        }

        else if (commandRouteRunnable == "Add") {

            ShellExecuteA(nullptr,
            "open", "git add .",
            nullptr, nullptr, SW_SHOWDEFAULT);

        }

        else if (commandRouteRunnable == ".") {


            const std::string commandRunnable = "chmod +x " + fileName;
            const std::string commandRunnable1 = "./ " + fileName;

            ShellExecuteA(nullptr,
            "open", commandRunnable.c_str(),
            nullptr, nullptr, SW_SHOWDEFAULT);


            ShellExecuteA(nullptr,
            "open", commandRunnable1.c_str(),
            nullptr, nullptr, SW_SHOWDEFAULT);

        }





    }


}
