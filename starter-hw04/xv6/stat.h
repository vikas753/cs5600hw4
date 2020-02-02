#define T_DIR  1   // Directory
#define T_FILE 2   // File
#define T_DEV  3   // Device

// Structure that would hold the File IO
// statistics till exec syscall
struct iostats {
  unsigned int read_bytes;   // Number of bytes read
  unsigned int write_bytes;  // Number of bytes written
};

int getiostats(int fd, struct iostats* stats);


struct stat {
  short type;  // Type of file
  int dev;     // File system's disk device
  uint ino;    // Inode number
  short nlink; // Number of links to file
  uint size;   // Size of file in bytes
};
