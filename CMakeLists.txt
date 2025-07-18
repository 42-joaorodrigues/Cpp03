cmake_minimum_required(VERSION 3.31)
project(Cpp03)

set(CMAKE_CXX_STANDARD 20)

add_executable(ex00
        CPP_Module_03/ex00/main.cpp
		CPP_Module_03/ex00/ClapTrap.cpp
		CPP_Module_03/ex00/ClapTrap.hpp
		CPP_Module_03/ex00/Makefile)

add_executable(ex01 CPP_Module_03/ex01/ClapTrap.cpp CPP_Module_03/ex01/ClapTrap.hpp CPP_Module_03/ex01/main.cpp CPP_Module_03/ex01/Makefile CPP_Module_03/ex01/ScavTrap.cpp CPP_Module_03/ex01/ScavTrap.hpp)
add_executable(ex02 CPP_Module_03/ex02/ClapTrap.cpp CPP_Module_03/ex02/ClapTrap.hpp CPP_Module_03/ex02/FragTrap.cpp CPP_Module_03/ex02/FragTrap.hpp CPP_Module_03/ex02/main.cpp CPP_Module_03/ex02/Makefile CPP_Module_03/ex02/ScavTrap.cpp CPP_Module_03/ex02/ScavTrap.hpp)
add_executable(ex03 CPP_Module_03/ex03/ClapTrap.cpp CPP_Module_03/ex03/ClapTrap.hpp CPP_Module_03/ex03/DiamondTrap.cpp CPP_Module_03/ex03/DiamondTrap.hpp CPP_Module_03/ex03/FragTrap.cpp CPP_Module_03/ex03/FragTrap.hpp CPP_Module_03/ex03/main.cpp CPP_Module_03/ex03/Makefile CPP_Module_03/ex03/ScavTrap.cpp CPP_Module_03/ex03/ScavTrap.hpp)
