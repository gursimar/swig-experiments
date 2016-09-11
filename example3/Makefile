CC = gcc
LD = ld
SWIG = swig
PYTHON = python
LIB_BUILD_ARGS = -fPIC -c
LINKER_ARGS = -shared
PYTHON_INCLUDE = -I/usr/local/include/python2.7

C_INTERFACE_FILE = example
C_SOURCE_FILE = example
OUT_LIB_FILE = example

# require you to make a $(C_INTERFACE_FILE).i in the directory
# Files generated -> simar.py, simar_wrap.c
build_python_interface_file:
	$(SWIG) -python $(C_INTERFACE_FILE).i

	# Files generated -> simar.o, simar_wrap.o ,_simar.so
build_python_module: build_python_interface_file
	@echo -e "\nBuilding library of code\n"
	$(CC) -fPIC -c $(C_SOURCE_FILE).c $(C_SOURCE_FILE)_wrap.c $(PYTHON_INCLUDE)
	$(LD) $(LINKER_ARGS) $(C_SOURCE_FILE).o $(C_SOURCE_FILE)_wrap.o -o _$(OUT_LIB_FILE).so
	@echo -e "\n\nPYTHON DONE\n"

build_php_interface_file:
	$(SWIG) -php $(C_INTERFACE_FILE).i

build_php_module: build_php_interface_file
	@echo -e "\nBuilding library of code\n"
	$(CC) `php-config --includes` -fPIC -c $(C_SOURCE_FILE).c $(C_SOURCE_FILE)_wrap.c
	$(LD) $(LINKER_ARGS) $(C_SOURCE_FILE).o $(C_SOURCE_FILE)_wrap.o -o $(OUT_LIB_FILE).so
	sudo cp $(OUT_LIB_FILE).so /usr/lib64/php/modules/
	@echo -e "\n\nPHP DONE\n"
	

#build_python_lib: build_python_interface_file
#	$(PYTHON) setup.py build_ext --inplace
    
clean:
	rm $(C_SOURCE_FILE).py *.pyc *_wrap.* *.so *.o 2>/dev/null || /bin/true	
	rm -rf build 2>/dev/null || /bin/true