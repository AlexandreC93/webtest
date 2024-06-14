#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>
#include <vector>
#include "Location.hpp"

class Server {
public:
    int listenPort;
    std::string serverName;
    std::vector<Location> locations;
    // Ajouter d'autres attributs nécessaires

    Server() : listenPort(0) {}
};

#endif // SERVER_HPP
