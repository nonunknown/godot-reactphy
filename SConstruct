#!/usr/bin/env python
import os
import sys

env = SConscript("../SConstruct")

# For the reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=["/run/media/nonunknown/3a1f3657-ce4a-4ffa-8f65-f41e1dfcaf68/reactphysics3d-master/include/","src/"])
sources = Glob("src/*.cpp")
env.Append(LINKFLAGS=['-L./libs/', '-lreactphysics3d'])

lib_name = "libreactphy"
output_path = "/run/media/nonunknown/3a1f3657-ce4a-4ffa-8f65-f41e1dfcaf68/projects4/OCEAN"

if env["platform"] == "macos":
    library = env.SharedLibrary(
        "{}/bin/{}.{}.{}.framework/{}.{}.{}".format(
            output_path,lib_name, env["platform"], env["target"], env["platform"], env["target"]
        ),
        source=sources,
    )
else:
    library = env.SharedLibrary(
        "{}/bin/{}{}{}".format(output_path,lib_name,env["suffix"], env["SHLIBSUFFIX"]),
        source=sources,
    )

Default(library)
