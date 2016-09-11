# swig-experiments
Write code in one language and it automatically generates code for other languages like python and php.

#Makefile
make build_python_interface_file
make build_python_module

#Run commands
Python - make clean && make build_python_module && python abc.py
PHP - make clean && make build_php_module && php abc.php

#Tutorials
Swig - http://www.swig.org/Doc2.0/SWIGDocumentation.html

Python - http://www.swig.org/Doc1.3/Python.html#Python_nn3

Php - http://www.swig.org/Doc1.3/Php.html
