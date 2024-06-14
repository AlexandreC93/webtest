#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>
#include <vector>

class Location {
public:
    std::string path;
    std::string root;
    std::vector<std::string> indexFiles;
    // Ajouter d'autres attributs nécessaires

    Location(const std::string& path) : path(path) {}
};

#endif // LOCATION_HPP
