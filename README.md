# swig-experiments
Write code in one language and it automatically generates code for other languages like python and php.

#Makefile
make build_<lang>_interface_file - to generate interface files

make build_<lang>_module - to generate c libs and glue code

#Run commands
Python - make clean && make build_python_module && python abc.py

PHP - make clean && make build_php_module && php abc.php

JAVA - make clean && make build_java_module && javac abc.java && java abc

#Tutorials
Swig - http://www.swig.org/Doc2.0/SWIGDocumentation.html

Libraries - http://www.swig.org/Doc1.3/Library.html#Library_carrays

Python - http://www.swig.org/Doc1.3/Python.html#Python_nn3

Php - http://www.swig.org/Doc1.3/Php.html
