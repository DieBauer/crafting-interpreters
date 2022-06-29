load("@rules_cc//cc:defs.bzl", "cc_binary")

package(default_visibility = ["//visibility:public"])


cc_binary(
    name = "clox",
    srcs = ["hello-world.cc"],
)

cc_library(
    name = "clox_lib",
    srcs = ["linkedlist.cc"],
)
cc_test(
    name = "clox_test",
    srcs = glob(["*_test.cc"]),
    size = "small",
  deps = ["@com_google_googletest//:gtest_main", ":clox_lib"],
)
