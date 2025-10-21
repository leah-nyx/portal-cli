#include <string>
#include <vector>

#include <portal-cli/argument-handler.h>

int main(int argc, char* argv[])
{

    std::vector<std::string> arguments(argv, argv + argc);
    PortalCli::ArgumentHandler::HandleArguments(arguments);

    return 0;
}