#include <iostream>
#include <windows.h>

#define debug true

struct text_util_struct
{
	auto error_print(std::string text) -> void
	{
		if (debug) { std::cout << " [ skar.error ] -> " + text << std::endl; }
	}

	auto log_print(std::string text) -> void
	{
		if (debug) { std::cout << " [ log ] -> " + text << std::endl; }
	}

	auto print_hex_addy(std::string name, uintptr_t value) -> void
	{
		if (debug) { std::cout << " [ " << name << " ] -> " << std::hex << value << std::endl; std::cout << std::dec; }
	}
};

text_util_struct* text_util = new text_util_struct;