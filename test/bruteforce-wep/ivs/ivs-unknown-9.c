typedef struct {unsigned int length;unsigned char * data;} wireshark_packet;
typedef struct {unsigned int length;wireshark_packet * packets;} wireshark_dico;
wireshark_dico load_packets ( void ) {
  wireshark_dico output;
  output.length = 9;
  output.packets = malloc(9*sizeof(wireshark_packet));
  output.packets[0].length = 82;
  output.packets[0].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[0].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\x10\x51\xa0\xe2\xe2\x40\xd5\x02\x7e\x18\x3f\x8e\xad\xd2\x4b\x97\x24\x39\xf1\x2e\x7f\x3c\x63\x80\xb9\x85\xe4\x5a\xb6\x23\x70\x91\x16\xd3\x33\x5c\x9f\x63\x3f\x85\x89\x25\xda\xac\x08\x39\xef\xd7\x4c\xc2\xf5\x47\x1a\x82\xda\xcb\x20\x06\x2c\x50",82);
  output.packets[1].length = 82;
  output.packets[1].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[1].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\xd0\x5d\xa7\xe2\xe2\x40\xdb\x9f\x74\x16\x65\x87\xaf\x3f\xe0\xd1\xf9\xbb\x28\x9a\xe1\x95\xd4\xdb\x98\x9b\xd7\x5c\xef\x8e\xf6\x9c\xd6\xd4\x90\xe4\x72\x1b\x8e\xf1\xd7\x8e\xb6\xd9\x2d\x72\xc1\x0a\x1a\xe1\x81\xe3\x57\xd0\xc9\xca\x61\x17\x0c\xbc",82);
  output.packets[2].length = 82;
  output.packets[2].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[2].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\xb0\x61\xa9\xe2\xe2\x40\xfe\x9d\xdb\xa5\x42\xb8\x74\x1d\x47\xaf\xef\x90\x7d\x11\x02\xd6\x6a\x9c\xfa\xa8\x0b\x49\x22\x18\x0d\xac\x02\x23\xf8\xc2\x80\xed\x9a\xe5\xbc\x3d\xff\x1d\xd7\x32\x31\x07\x67\x03\x8f\x74\x46\x51\xb2\x71\x15\x5c\xde\x0b",82);
  output.packets[3].length = 82;
  output.packets[3].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[3].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\x10\x67\xac\xe2\xe2\x40\x11\x1a\x49\x67\x93\xbd\xd3\x50\x11\xae\xbd\xa9\x65\xe8\x0e\x1b\xa3\x64\x1a\x92\xfa\x24\xab\x19\xb5\xe5\x4e\x2e\x6a\x4a\x2d\xd1\x7d\xc4\x9f\x50\xaa\x1a\x30\xc2\x59\x20\xd5\x7b\xf8\x91\x6e\x1f\xb1\xb6\x61\x0a\xd8\x56",82);
  output.packets[4].length = 82;
  output.packets[4].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[4].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\x00\x7f\xba\xe2\xe2\x40\xdd\xd8\x42\xa7\x41\xa5\xb4\x5e\x7f\xd7\x7a\x87\x43\x83\x2f\xcd\x14\xac\x75\xd0\x19\x95\x5d\x6d\xe5\x08\x87\x60\x1b\xb4\x7d\x20\x51\x04\x20\xad\x3c\xe0\x0e\x45\x05\xff\x4f\x64\xc7\x45\x30\xe1\x6d\xed\x31\xcf\x3d\x93",82);
  output.packets[5].length = 82;
  output.packets[5].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[5].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\xc0\x80\xbb\xe2\xe2\x40\xe0\xa6\xa1\x05\xf1\x6f\xcc\xf9\xfa\x1d\x0f\xf5\xe0\x78\x51\x4a\x89\x01\x9e\x56\x16\x96\x27\x50\x72\x71\x29\x69\x18\x56\x97\x1e\x0b\x5c\xee\x68\xb6\x85\x8b\x10\xd1\xc5\xcc\x4a\x2e\x8a\xca\xd8\x47\xcb\xcf\x3d\xc1\xbe",82);
  output.packets[6].length = 82;
  output.packets[6].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[6].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\x80\xd5\xee\xe2\xe2\x40\x19\xce\xb5\x96\xb0\xfb\xcf\x60\x37\xc2\x61\xd9\xd5\x12\xde\xef\x52\xc4\xb1\x08\xfc\xd5\x18\x48\x03\xcc\xb2\xed\x23\x72\xa6\xd5\xd9\xf0\x14\xce\x60\xc5\xd6\x47\xae\x8f\x54\xb4\xd8\x03\xf2\x23\xf7\x92\xb0\x0b\x95\x0d",82);
  output.packets[7].length = 82;
  output.packets[7].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[7].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\xa0\xde\xf4\xe2\xe2\x40\xa3\xcf\xa2\x55\x51\x94\x1a\x0a\x5d\xa3\x9f\x6a\x8b\x3a\x0e\x9a\xc3\x17\x1d\x84\xb4\x2a\xf8\x8d\xe9\x40\x02\xb1\x93\x20\x4e\xb9\xe8\x5a\x55\xb6\x76\x41\x74\x47\x8c\x43\xd5\x66\x70\x98\x6d\x07\x08\x1b\xde\xd6\x72\x35",82);
  output.packets[8].length = 82;
  output.packets[8].data = malloc(82*sizeof(unsigned char));
  memcpy(output.packets[8].data,(unsigned char *)"\x08\x42\x00\x00\x01\x00\x0c\xcc\xcc\xcd\x00\x16\xb6\x4f\x4f\x13\xec\xc8\x82\x33\x42\x2e\xa0\xf4\x00\xe3\xe2\x40\x45\x7e\x54\xa9\xb9\x0b\x8c\x9f\x33\xb8\x69\xbc\x43\xa6\xc2\x46\x09\x6d\x15\x1a\x7a\xc1\x8a\x7e\xc9\xe1\xc3\x69\xf0\x3e\x74\xb2\xa1\xea\xbc\x2a\x58\x54\x16\x9a\x9f\x33\x95\xdd\x3b\xb6\x3e\x52\xdc\x87\xa8\xcb\x8b\x26",82);
  return output;
}
