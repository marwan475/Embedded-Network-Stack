#ifndef SOCKETAPI_H
#define SOCKETAPI_H

#define SYSCALL_SOCKET_NR           12
#define SYSCALL_SOCKET_BIND_NR      13
#define SYSCALL_SOCKET_CLOSE_NR     14
#define SYSCALL_SOCKET_RECV_NR      15
#define SYSCALL_SOCKET_REQUEST_NR   16

int __socket(int pid, uint8_t* gateway, uint8_t protocol);

int __bind(int soc, socket_info *soc_info);

int __closesocket(int soc);

int __recvfrom(int soc, uint8_t* buff);

int __sendto(int soc, uint8_t* frame, int size, socket_info *soc_info);

#endif
