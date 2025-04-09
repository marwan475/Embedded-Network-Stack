# Embedded Network Stack

UDP network stack and ethernet driver for Beaglebone Black

AM335x Sitara™ Processors Common Platform Ethernet Switch Driver

Microchip LAN8710A PHY Driver

### Network Stack Supported protocols
- Sockets
- UDP
- ICMP
- IPv4
- ARP
- Ethernet II

Upper Half driver to multiplex the network stack
- drivers/net.c contains upper half driver and network stack initialization

provides socket system call api for user programs to use
- example on how to handle the system call is in helper/socketsyscalls.c

test/ contains example program for a socket chat

## Examples

### Ping

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/ping.png)

### UDP Socket chat between windows PC and embedded application running the network stack

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/schat.png)

## Design

Full Design documentation can be found in docs/NetworkStack.pdf

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/Screenshot%202025-04-03%20043002.png)

