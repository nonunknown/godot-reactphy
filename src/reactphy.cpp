

#include "reactphy.h"

#include <godot_cpp/core/class_db.hpp>

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <reactphysics3d/reactphysics3d.h>

using namespace godot;

void ReactPhy::_bind_methods() {
	
	ClassDB::bind_method(D_METHOD("start"), &ReactPhy::start);

}

void ReactPhy::start() {
	UtilityFunctions::print("hello world");
}

ReactPhy::ReactPhy() {
	UtilityFunctions::print("Constructor.");
}

ReactPhy::~ReactPhy() {
	UtilityFunctions::print("Destructor.");
}