#Netbeans & Compiler Setup
*Courtesy of Jonathan Pavlik*

**Install JDK**

+ Install [java development kit] (http://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html)

**Install Netbeans**

+ Download C++ [Netbeans](https://netbeans.org/downloads/) version
+ Open net beans and install it will autodetect the compiler


**Compiler setup**

+ Follow the instructions [here](https://netbeans.org/community/releases/73/cpp-setup-instructions.html)

**If the above does not work try below**

---

**Install MinGW**

+ Install [MinGW](http://www.mingw.org/)
+ Open the MinGW Installer and install:
    + mingw developer tools, mysys-base, mingw32-base, mingw32 gcc-g++
+ (**Windows Only**) Open windows explorer right click this pc and click properties then click advanced system settings then find the Environment Variables button and select it
+ Under system variables edit the one labeled PATH add this to the end ";C:\MinGW\bin;C:\MinGW\msys\1.0\bin" without the quotation marks after MinGW is finished installing 
+ In NetBeans click tools options and click on c/c++
+ where it says *make* browse to the following path "C:\MinGW\msys\1.0\bin" and locate the make.exe double click on it
+ You should now be able to compile a program.
    + Test a sample program by creating a new project and selecting one of the samples that comes with Netbeans
+ If it still fails try re-editing your PATH (environment variable)
+ Re-open NetBeans and try again it should work