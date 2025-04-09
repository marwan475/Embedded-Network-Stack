#include "net.h"

// These are just for example on how to handle the system call in dispatcher

int __socket(int pid, uint8_t* gateway, uint8_t protocol){
  return socket(pid, gateway, protocol);
}

int __bind(int soc, socket_info *soc_info){
  return socket_bind(soc, soc_info);
}

int __closesocket(int soc){
  return socket_free(soc);
}

int __recvfrom(int soc, uint8_t* buff){
  
  // not checking if usr buff is big enough
  struct payload* payload;
  
  payload = socket_recv(soc);

  net_memcopy(buff, payload->data, payload->size);

  kfree(payload);

  return payload->size;

}

int __sendto(int soc, uint8_t* frame, int size, socket_info *soc_info){

  // not checking if new frame size is bigger then max
  int new_size = size + ETH_HEADER_SIZE + IPV4_HEADER_SIZE + UDP_HEADER_SIZE;
  uint8_t* new_frame = (uint8_t*) kmalloc(new_size);

  uint8_t payload_start = ETH_HEADER_SIZE+IPV4_HEADER_SIZE+UDP_HEADER_SIZE;

  net_memcopy(&(new_frame[payload_start]),frame,size);

  socket_table[soc].src_port = soc_info->src_port;
  socket_table[soc].dest_port = soc_info->dest_port;
  socket_table[soc].dest_ip = soc_info->dest_ip;

  return socket_transmit_request(soc, new_frame, new_size);

}

