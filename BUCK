http_archive(
    name = "newtonsoft_json_file",
    urls = ["https://api.nuget.org/v3-flatcontainer/newtonsoft.json/13.0.4/newtonsoft.json.13.0.4.nupkg"],
    sha256 = "f09081d457405baf35a973fa0c50d6bf272ed683f2568c5a620a49da952f6529",
    type = "zip",
    sub_targets = [
        "lib/net45/Newtonsoft.Json.dll",
    ],
)

prebuilt_dotnet_library(
    name = "newtonsoft_json",
    assembly = ":newtonsoft_json_file[lib/net45/Newtonsoft.Json.dll]",
)

csharp_binary(
    name = "main",
    srcs = ["main.cs"],
    deps = [
        ":newtonsoft_json",
    ],
    framework_ver = "net46",
    add_hermetic_arguments = False,
)

cxx_library(
    name = "cxx_library",
    srcs = ["library.cpp"],
)

cxx_binary(
    name = "main_generator",
    srcs = ["main_generator.cpp"],
    compiler_flags = ["/std:c++17"],
    deps = [":cxx_library"],
    link_style = "shared",
)

genrule(
    name = "generate_code",
    cmd_exe = "$(location :main_generator) ${OUT}",
    out = "include",
)

cxx_binary(
    name = "main_generator_user",
    srcs = ["main_generator_user.cpp"],
    headers = [
        ":generate_code",
    ],
)
