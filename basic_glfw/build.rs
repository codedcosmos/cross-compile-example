extern crate bindgen;

fn main() {
	// Link the c code with rust
	cc::Build::new()
		.cpp(true)
		.file("csrc/basic_glfw.cpp")
		.compile("basic_glfw_bindings");

	// Automatically create bindings for glfw bindings
	bindgen::Builder::default()
		.header("csrc/basic_glfw.cpp")
		.parse_callbacks(Box::new(bindgen::CargoCallbacks)) // Invalidate built crate on change
		.layout_tests(false)
		.allowlist_function("do_stuff")
		.generate()
		.expect("Failed to create bindgen for bindings")

		.write_to_file("src/glfw_stuff.rs")
		.expect("Failed to write bindgen file for bindings");
}