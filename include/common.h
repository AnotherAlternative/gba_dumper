#define MAX_PATH_LENGTH 			256

typedef struct {
	char* rom_path;
	unsigned char *rom_buffer;
	unsigned long rom_length;
} rom_file;