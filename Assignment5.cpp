// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: May 2022
// This program gets the greatest and smallest integer in a list

#include <iostream>
#include <list>
#include <string>
#include <cmath>
using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

main() {
    // this function gets the greatest and smallest integer in a list
  std::list<int> intList;
  std::string input;
  int inputAsInt;
  std::list<int>::iterator l_iter;
  int min = pow(2, 31) - 1;
  int max = -min - 1;

  // input
  while (true) {
    cout << "Enter an integer (\"EXIT\" to finish): ";
    getline(cin, input);
    if (input == "EXIT")
      break;
    try {
      inputAsInt = std::stoi(input);
      intList.push_back(inputAsInt);
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer.\n";
    }
  }

  if (intList.size() == 0) {
    cout << "\nNo numbers were entered" << endl;
  } else {
    for (l_iter = intList.begin(); l_iter != intList.end(); l_iter++) {
      if (min > *l_iter) {
        min = *l_iter;
      }
      if (max < *l_iter) {
        max = *l_iter;
      }
    }
    cout << "" << endl;
    cout << "The smallest number is " << min << endl;
    cout << "The greatest number is " << max << endl;
  }
}
