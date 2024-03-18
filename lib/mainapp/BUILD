load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "mainapp",
    srcs = ["mainapp.cpp"],
    hdrs = ["mainapp.h"],
    visibility = ["//src:__subpackages__"],
    deps = ["//lib/convexhull_handler:convexhull_handler","//lib/point:point","//lib/file_manager:file_manager"],
)