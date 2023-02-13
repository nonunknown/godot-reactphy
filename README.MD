# React Physics for Godot Engine 4.x

ReactPhysics3D is a C++ physics engine library that can be used in 3D simulations and games. The library is developed by Daniel Chappuis and is released under the open-source ZLib license.

ReactPhysics3D has the following features:

Rigid body dynamics

Discrete collision detection

Collision shapes (Sphere, Box, Capsule, Convex Mesh, Static Concave Mesh, Height Field)

Multiple collision shapes per body

Broadphase collision detection (Dynamic AABB tree)

Narrowphase collision detection (SAT/GJK)

Collision response and friction (Sequential Impulses Solver)

Joints (Ball and Socket, Hinge, Slider, Fixed)

Collision filtering with categories

Ray casting

Sleeping technique for inactive bodies

Multi-platform (Windows, Linux, Mac OS X)

No external libraries (do not use STL containers)

Documentation (user manual and Doxygen API)

Testbed application with demos

Integrated Profiler

Debugging Renderer

Logs

Unit tests


# Why port this to Godot 4

If you are here, probably you have faced a lot of issues with the current state of physics in the engine, in order to solve or at least try to solve
I've started porting this library to the engine, I'm no C++ expert, but I think that toguether we can get somewhere, the first problem I had is detailed
in the link below, If you wish to help me in any way please contact me!

# Current problem

we need to solve this compilation problem https://github.com/DanielChappuis/reactphysics3d/discussions/317

# How to setup this library for compilation

* Clone react phy repo: https://github.com/DanielChappuis/reactphysics3d?
* Clone godot-cpp repo: https://github.com/godotengine/godot-cpp
* Inside the cloned godot-cpp folder clone this repo
* inside the react phy repo folder, create a folder called build
* open this new folder with terminal
* type `cmake ..`
* then `make -jN` where N is your processor thread count
* it will generate a DLL(windows) or SO(linux) copy it to the  `react-phy/libs/` folder
* modify react-phy Sconstruct `output_dir` to your godot 4 project bin folder
* in the Sconstruct's line 16 modify the `reactphysics3d-master/include/` to point to the full directory
* then go to this repo folder, and execute `scons -jN target=template_debug`