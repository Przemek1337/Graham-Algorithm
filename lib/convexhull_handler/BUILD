load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "convexhull_handler",
    srcs = ["convexhull_handler.cpp"],
    hdrs = ["convexhull_handler.h"],
    visibility = ["//lib:__subpackages__"],
    deps = ["//lib/direction:direction", "//lib/point:point", "//lib/orientation_handler:orientation_handler"],
)