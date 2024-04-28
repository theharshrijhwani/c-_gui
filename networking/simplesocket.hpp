// Harshvardhan Rijhwani
// 28th April, 2024

#ifndef simplesocket_hpp
#define simplesocket_hpp

#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>

namespace HR {
class SimpleSocket {
private:
    int connection;
    struct sockaddr_in address;

public:
    SimpleSocket(int domain, int service, int protocol);
};
}  // namespace HR

#endif