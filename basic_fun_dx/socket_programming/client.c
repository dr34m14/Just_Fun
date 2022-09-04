#include <stdio.h>
#include <sys/types.h>
#include <string.h>

#include <stdlib.h>
#include <Winsock2.h>

int main()
{

    int network_socket = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(8080);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // conection
    int connection_status;
    connection_status = connect(network_socket, (struct sockadd *)&server_address, sizeof(server_address));

    // recv data
    char msg[250];
    recv(network_socket, &msg, sizeof(msg),0);
    // close the server
    close(network_socket);
    return 0;
}