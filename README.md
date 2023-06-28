# Veggie_Tales_Registration_Form
## Overview
This project was born because my church needed to be able to have access to paper copies of forms that people had filled out online. This program takes csv values and builds a new form in html that can be formatted with CSS.
The program is broken up into 4 parts.
## Main
Calls all of the proper functions.
## Content.h
Content is a class that takes a vector of values, a vector of charactor limits, and a vector of field names. It puts those values into itself so that it can be accessed by other parts of the program.
## file_reader.h
The file reader is a class that takes in a file path as an argument and then will break the file up by lines, and tokenize each comma seperated value. It will then hold all the data in a vector of vectors.
## html_generator.h
This class takes in a vector of values, a vector of charactor limits. It then generates a html file with the name on the form that can be printed. 
