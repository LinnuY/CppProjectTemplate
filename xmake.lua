add_rules("mode.debug", "mode.release")

target("cpp_demo_lib")
    set_kind("shared")
    add_files("lib/**.cpp")

target("cpp_demo")
    set_kind("binary")
    add_deps("cpp_demo_lib")
    add_files("src/**.cpp")

