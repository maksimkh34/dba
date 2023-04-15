#include "convert.h"
#include <string>
#include <msclr/marshal_cppstd.h>
std::string convert(System::String^ text)
{
    return msclr::interop::marshal_as<std::string>(text);
}

System::String^ convert(std::string text)
{
    return msclr::interop::marshal_as<System::String^>(text);
}