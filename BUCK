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
