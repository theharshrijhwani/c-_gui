#include "simplesocket.hpp"

HR::SimpleSocket::SimpleSocket(int domain, int service, int protocol) {
    address.sinfamily = domain;
    int connection = socket(domain, service, protocol);
}