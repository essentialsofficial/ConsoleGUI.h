#pragma once
#include <string>
#include <iostream>
namespace cGUI {
	class ConsoleGUI {
	public:
		void DrawTest(int width, int height, std::string title, std::string txt, bool Button, std::string buttontext, void after());
	};
}

