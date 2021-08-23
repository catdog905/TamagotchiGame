cmake_minimum_required(VERSION 3.10)

#set the project name
project(TamagotchiGame)

#Find SFML shared libraries
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

#add the executable
add_executable(TamagotchiGame 
    main.cpp 
    GameCycle.h 
    GameCycle.cpp 
    World.h 
    World.cpp 
    InputHandler.h 
    Renderable.h)

#Link executable to required SFML libraries
target_link_libraries(TamagotchiGame sfml-graphics)
