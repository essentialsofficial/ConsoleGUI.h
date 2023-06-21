#include "ConsoleGUI.h"
#include <iostream>
#include <string>
using namespace std;

void cGUI::ConsoleGUI::DrawTest(int width, int height, std::string title, std::string txt, bool Button, std::string buttontext, void after() ) {
	// Width - ширина, height -  высота
	int slctd;
	for (int i = 0; i <= height; i++) {
		if (i == 2) {

			for (int l = 0; l <= width; l++) {
				cout << "#";
				if (l == width / 5) {
					cout << title;
				}
				else {
					cout << "#";
				}

			}



		}
		else {
			if (i == 5) {
				for (int l = 0; l <= width; l++) {
					cout << "#";
					if (l == width / 2) {
						cout << txt;
					}
					else {
						cout << "#";
					}

				}
			}
			else {
				if (i == 7) {
					for (int l = 0; l <= width; l++) {
						if (l == width / 2) {
							if (Button == true) {
								cout << buttontext;
								slctd = 1;

							}
							else {
								cout << "#";
							}
							
						}

						else {
							cout << "#";
						}


					}
				}
				else {
					for (int l = 0; l <= width; l++) {
						cout << "#";


					}
				}
			}
		}


	}

	if (Button == true) {
		cin.ignore();
		cin.get();
		after();
	}
	else {

	}
	
}

