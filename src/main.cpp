#include "Launcher.hpp"
#include <iostream>

int main(void) {
    Launcher launcher;
    launcher.loadConfig("./default.conf");

    for (const Server& server : launcher.servers) {
        std::cout << "Server listening on port: " << server.listenPort << std::endl;
        std::cout << "Server name: " << server.serverName << std::endl;
        for (const Location& location : server.locations) {
            std::cout << "  Location: " << location.path << std::endl;
            std::cout << "  Root: " << location.root << std::endl;
            std::cout << "  Index files: ";
            for (const std::string& indexFile : location.indexFiles) {
                std::cout << indexFile << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
