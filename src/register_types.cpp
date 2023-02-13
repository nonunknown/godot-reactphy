

#include "register_types.h"

#include <gdextension_interface.h>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

#include "reactphy.h"

using namespace godot;


void initialize_react_phy_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<ReactPhy>();
	// ClassDB::register_class<ExampleRef>();
	// ClassDB::register_class<ExampleMin>();
	// ClassDB::register_class<Example>();
	// ClassDB::register_class<ExampleVirtual>(true);
	// ClassDB::register_abstract_class<ExampleAbstract>();
}

void uninitialize_react_phy_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

extern "C" {
// Initialization.
GDExtensionBool GDE_EXPORT reactphy_library_init(const GDExtensionInterface *p_interface, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

	init_obj.register_initializer(initialize_react_phy_module);
	init_obj.register_terminator(uninitialize_react_phy_module);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

	return init_obj.init();
}
}