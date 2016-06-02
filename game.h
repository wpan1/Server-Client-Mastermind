// Handle game thread
void *game_handler(void *arguments);
// Send welcome message to client
void send_welcome(int sock);
// Send feeback after each guess to client
int send_feedback(int sock, char* secretcode, char* client_message, int *count, FILE *fp);