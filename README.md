# Embedded Network Stack

UDP network stack and ethernet driver for Beaglebone Black

### Supported protocols
- Sockets
- UDP
- ICMP
- IPv4
- ARP
- Ethernet II

provides socket system call api for user programs to use
- example on how to handle the system call is in helper/socketsyscalls.c

test/ contains example program for a socket chat

## Examples

### Ping

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/ping.png)

### UDP Socket chat between windows PC and embedded application running the network stack

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/schat.png)

## Design

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/Screenshot%202025-04-03%20043002.png)

