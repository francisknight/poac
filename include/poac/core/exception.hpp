#ifndef POAC_CORE_EXCEPTION_HPP
#define POAC_CORE_EXCEPTION_HPP

#include <string>
#include <stdexcept>


namespace poac::core::exception {
//    namespace msg {
//        static constexpr char const* COMPILE_ERR =
//                "YAML directives must have exactly one argument";
//    }

    class invalid_first_arg : public std::invalid_argument
    {
    public:
        explicit invalid_first_arg(const std::string& __s) : invalid_argument(__s) {}
        explicit invalid_first_arg(const char* __s)        : invalid_argument(__s) {}

        virtual ~invalid_first_arg() = default;
    };
    class invalid_second_arg : public std::invalid_argument
    {
    public:
        explicit invalid_second_arg(const std::string& __s) : invalid_argument(__s) {}
        explicit invalid_second_arg(const char* __s)        : invalid_argument(__s) {}

        virtual ~invalid_second_arg() = default;
    };
    class error : public std::invalid_argument
    {
    public:
        explicit error(const std::string& __s) : invalid_argument(__s) {}
        explicit error(const char* __s)        : invalid_argument(__s) {}

        virtual ~error() = default;
    };
    class warn : public std::invalid_argument
    {
    public:
        explicit warn(const std::string& __s) : invalid_argument(__s) {}
        explicit warn(const char* __s)        : invalid_argument(__s) {}

        virtual ~warn() = default;
    };
} // end namespace
#endif // !POAC_CORE_EXCEPTION_HPP
