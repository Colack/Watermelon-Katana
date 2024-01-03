#include "common.hpp"

namespace com_Watermelonkatana_error {
    const std::string CONTRIBUTORS {
        "Jack Spencer > ColackAlpha@gmail.com"
    };

    // Error Code, Error. Fix this.
    const _HASH_MAP_<int, std::string> ERRORS {
        {1, ""},
        {2, ""},
        {3, ""},
        {4, ""}
    }

    /**
     * com_Watermelonkatana_error_credits
     * Returns credits for this portion of the library.
    */
    std::string credits() {
        for (int i = 0; i < CONTRIBUTORS.length(); i++) {
            return CONTRIBUTORS[i]; // FIX THIS
        }
    }

    std::string error(std::string message) {
        return COM_WATERMELONKATANA_PREFIX + message + COM_WATERMELONKATANA_SUFFIX;
    }

    std::string error(std::string message, int errorCode) {
        return COM_WATERMELONKATANA_PREFIX + "Error " + errorCode + " " + message + COM_WATERMELONKATANA_SUFFIX;
    }

    std::string error(std::string message, int errorCode, std::string extraMessage) {
        return extraMessage + COM_WATERMELONKATANA_SUFFIX + COM_WATERMELONKATANA_PREFIX + "Error " + errorCode + " " + message + COM_WATERMELONKATANA_SUFFIX; 
    }


}