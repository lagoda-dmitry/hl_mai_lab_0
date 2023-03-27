#include <optional>
#include "message_server/http_messages_server.h"

int main(int argc, char*argv[]) 
{
    HTTPMessagesServer app;
    return app.run(argc, argv);
}