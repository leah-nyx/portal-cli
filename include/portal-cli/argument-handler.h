#pragma once

#include <string>
#include <vector>

namespace PortalCli
{
    class ArgumentHandler
    {
    public:
        static void HandleArguments(std::vector<std::string> arguments);

    private:
        bool _portalOneLines {true};
        bool _portalTwoLines {true};
        bool _dialogueOnly {true};
        bool _includeBetaLines {false};
        bool _includeUnusedLines {false};
        // bool _turretLines {false};
        // bool _gladosLines {true};
    };
} // namespace PortalCli
