#include "ConfigParser.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

void ConfigParser::parseConfig(const std::string& filename, std::vector<Server>& servers) {
    std::ifstream configFile(filename);
    std::string line;

    Server currentServer;
    Location* currentLocation = nullptr;

    while (std::getline(configFile, line)) {
        std::istringstream iss(line);
        std::string key;

        iss >> key;
        if (key == "server") {
            if (!currentServer.locations.empty() || !currentServer.serverName.empty()) {
                servers.push_back(currentServer);
                currentServer = Server();
            }
        } else if (key == "listen") {
            iss >> currentServer.listenPort;
        } else if (key == "server_name") {
            iss >> currentServer.serverName;
        } else if (key == "location") {
            std::string path;
            iss >> path;
            currentServer.locations.push_back(Location(path));
            currentLocation = &currentServer.locations.back();
        } else if (currentLocation && key == "root") {
            iss >> currentLocation->root;
        } else if (currentLocation && key == "index") {
            std::string indexFile;
            while (iss >> indexFile) {
                currentLocation->indexFiles.push_back(indexFile);
            }
        }
        // Ajouter d'autres clés et attributs nécessaires
    }

    if (!currentServer.locations.empty() || !currentServer.serverName.empty()) {
        servers.push_back(currentServer);
    }
}
