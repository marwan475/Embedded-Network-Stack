# Embedded Network Stack

Baremetal UDP Network stack and ethernet driver for Beaglebone Black

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
- src/drivers/net.c contains upper half driver and network stack initialization

provides socket system call api for user programs to use
- example on how to handle the system call is in src/utils/socketsyscalls.c

tests/ contains example program for a socket chat

## Examples

### Ping

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/ping.png)

### UDP Socket chat between windows PC and embedded OS running the network stack

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/schat.png)

## Design

Full Design documentation can be found in docs/NetworkStack.pdf

Notes I took to write the Ethernet driver and Network stack can be found in docs/EthernetNotes.pdf

![alt text](https://github.com/marwan475/Embedded-Network-Stack/blob/main/docs/Screenshot%202025-04-03%20043002.png)

