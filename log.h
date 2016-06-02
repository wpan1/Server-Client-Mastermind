// Enumeration values for log file writing
#define CONNECT 1
#define GENSECRET 2
#define CLIENTGUESS 3
#define FAILURE 4
#define DISCONNECT 5
#define SERVERHINT 6
#define CLIENTSUCCESS 7
#define INVALID 8

// Write to stdout and log file
void write_log(int sock, char* secretcode, struct sockaddr_in *cli_addr, 
				char* clientmessage, int b, int m, int logval, FILE *fp);

// Write connection statistics to stdout and log file
void write_connection_stats(int connections, int totalwins, FILE *fp);

// Write memory usage statistics to stdout and log file
void write_memory_usage(FILE *fp);