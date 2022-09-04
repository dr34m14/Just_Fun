#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <Winsock2.h>
// #include <fcntl.h>
// #include <winsock.h>
// #include<netinet/in.h>

int main()
{

    char server_msg[] = "I am not going to stop ,you here that";
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(8080);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // bind
    bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    // listen
    listen(server_socket, 5);

    // accpect incoming
    int client_sock;
    client_sock = accept(server_socket, NULL, NULL);

    // send msg

    send(client_sock, server_msg, sizeof(server_msg), 0);

    // close the server
    close(server_socket);
    return 0;
}