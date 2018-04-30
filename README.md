# Compilation
 Create a build folder:

`mkdir build`

* Move to the created folder:

`cd build`

* Create the `MakeFile` via cmake:

`cmake ../src`

To configure to be in debug mode :

`cmake -DCMAKE_BUILD_TYPE=Debug ../src`

* Compile the code to generate the executable:

`make` or `make -j n` where `n` is the number of cores to use for the compilation

* A folder bin will be created at the same level as the build directory.

# Remarks

* If you add new file or remove some other, you have to create the makefile again:

`cmake ../src`
