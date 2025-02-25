// #include <iostream>
// #include <sys/socket.h>
// #include <arpa/inet.h>
// #include <unistd.h>
// #include <cstring>

// #define PORT 12345
// #define BUFFER_SIZE 1024

// int main() {
//     int sockfd;
//     struct sockaddr_in server_addr, client_addr;
//     socklen_t client_len = sizeof(client_addr);
//     char buffer[BUFFER_SIZE];

//     // 创建UDP套接字
//     if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
//         perror("Socket creation failed");
//         return 1;
//     }

//     // 配置服务器地址
//     memset(&server_addr, 0, sizeof(server_addr));
//     server_addr.sin_family = AF_INET;
//     server_addr.sin_addr.s_addr = INADDR_ANY;
//     server_addr.sin_port = htons(PORT);

//     // 绑定套接字到地址和端口
//     if (bind(sockfd, (const struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
//         perror("Bind failed");
//         return 1;
//     }

//     std::cout << "Server listening on port " << PORT << std::endl;

//     // 接收来自客户端的消息
//     while (true) {
//         int n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, 0, (struct sockaddr *)&client_addr, &client_len);
//         buffer[n] = '\0';  // 以null字符结束字符串

//         std::cout << "Received message: " << buffer << std::endl;

//         // 发送响应给客户端
//         const char *response = "Message received";
//         sendto(sockfd, response, strlen(response), 0, (const struct sockaddr *)&client_addr, client_len);
//     }

//     close(sockfd);
//     return 0;
// }

// #include <iostream>
// #include <sys/socket.h>
// #include <arpa/inet.h>
// #include <unistd.h>
// #include <cstring>

// #define SERVER_IP "172.20.10.1"
// #define PORT 11
// #define BUFFER_SIZE 1024

// int main() {
//     int sockfd;
//     struct sockaddr_in server_addr;
//     char buffer[BUFFER_SIZE];

//     // 创建UDP套接字
//     if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
//         perror("Socket creation failed");
//         return 1;
//     }

//     // 配置服务器地址
//     memset(&server_addr, 0, sizeof(server_addr));
//     server_addr.sin_family = AF_INET;
//     server_addr.sin_port = htons(PORT);
//     server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

//     std::cout << "Enter message to send to server: ";
//     std::cin.getline(buffer, BUFFER_SIZE);

//     // 发送消息到服务器
//     sendto(sockfd, buffer, strlen(buffer), 0, (const struct sockaddr *)&server_addr, sizeof(server_addr));

//     // 接收服务器响应
//     int n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, 0, nullptr, nullptr);
//     buffer[n] = '\0';  // 以null字符结束字符串

//     std::cout << "Server response: " << buffer << std::endl;

//     close(sockfd);
//     return 0;
// }
// #include <iostream>
// #include <sys/socket.h>
// #include <netinet/in.h>
// #include <arpa/inet.h>
// #include <unistd.h>
// #include <cstring>

// #define SERVER_IP "fe80::94ad:23ff:fe39:da64"  // 或者使用实际的IPv6地址
// #define PORT 777
// #define BUFFER_SIZE 1024

// int main() {
//     int sockfd;
//     struct sockaddr_in6 server_addr;
//     char buffer[BUFFER_SIZE];

//     // 创建UDP套接字
//     if ((sockfd = socket(AF_INET6, SOCK_DGRAM, 0)) < 0) {
//         perror("Socket creation failed");
//         return 1;
//     }

//     // 配置服务器地址
//     memset(&server_addr, 0, sizeof(server_addr));
//     server_addr.sin6_family = AF_INET6;
//     server_addr.sin6_port = htons(PORT);
//     if (inet_pton(AF_INET6, SERVER_IP, &server_addr.sin6_addr) <= 0) {
//         perror("Invalid IPv6 address");
//         return 1;
//     }

//     std::cout << "Enter message to send to server: ";
//     std::cin.getline(buffer, BUFFER_SIZE);

//     // 发送消息到服务器
//     sendto(sockfd, buffer, strlen(buffer), 0, (const struct sockaddr *)&server_addr, sizeof(server_addr));

//     // 接收服务器响应
//     int n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, 0, nullptr, nullptr);
//     buffer[n] = '\0';  // 以null字符结束字符串

//     std::cout << "Server response: " << buffer << std::endl;

//     close(sockfd);
//     return 0;
// }

// #include <iostream>
// #include <sys/socket.h>
// #include <netinet/in.h>
// #include <arpa/inet.h>
// #include <unistd.h>
// #include <cstring>

// #define PORT 777
// #define BUFFER_SIZE 1024

// int main() {
//     int sockfd;
//     struct sockaddr_in6 server_addr, client_addr;
//     socklen_t client_len = sizeof(client_addr);
//     char buffer[BUFFER_SIZE];

//     // 创建UDP套接字
//     if ((sockfd = socket(AF_INET6, SOCK_DGRAM, 0)) < 0) {
//         perror("Socket creation failed");
//         return 1;
//     }

//     // 配置服务器地址
//     memset(&server_addr, 0, sizeof(server_addr));
//     server_addr.sin6_family = AF_INET6;
//     server_addr.sin6_addr = in6addr_any;  // 监听所有IPv6地址
//     server_addr.sin6_port = htons(PORT);

//     // 绑定套接字到地址和端口
//     if (bind(sockfd, (const struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
//         perror("Bind failed");
//         return 1;
//     }

//     std::cout << "Server listening on port " << PORT << " (IPv6)" << std::endl;

//     // 接收来自客户端的消息
//     while (true) {
//         int n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, 0, (struct sockaddr *)&client_addr, &client_len);
//         buffer[n] = '\0';  // 以null字符结束字符串

//         std::cout << "Received message: " << buffer << std::endl;

//         // 发送响应给客户端
//         const char *response = "Message received (IPv6)";
//         sendto(sockfd, response, strlen(response), 0, (const struct sockaddr *)&client_addr, client_len);
//     }

//     close(sockfd);
//     return 0;
// }


#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

#define SERVER_IP "fe80::94ad:23ff:fe39:da64"  // 或者使用实际的IPv6地址
#define PORT 777
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    struct sockaddr_in6 server_addr;
    const char *message = "Hello";  // 发送的消息

    // 创建UDP套接字
    if ((sockfd = socket(AF_INET6, SOCK_DGRAM, 0)) < 0) {
        perror("Socket creation failed");
        return 1;
    }

    // 配置服务器地址
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin6_family = AF_INET6;
    server_addr.sin6_port = htons(PORT);
    if (inet_pton(AF_INET6, SERVER_IP, &server_addr.sin6_addr) <= 0) {
        perror("Invalid IPv6 address");
        return 1;
    }

    // 发送消息到服务器
    sendto(sockfd, message, strlen(message), 0, (const struct sockaddr *)&server_addr, sizeof(server_addr));

    std::cout << "Message sent: " << message << std::endl;

    close(sockfd);
    return 0;
}
