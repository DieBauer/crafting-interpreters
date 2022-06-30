load("@rules_java//java:defs.bzl", "java_binary")

package(default_visibility = ["//visibility:public"])

java_binary(
    name = "jlox",
    main_class = "kat.jens.lox.Lox",
    srcs = glob(["kat/jens/lox/*.java"]),
)

java_binary(
    name = "ast_printer",
    main_class = "kat.jens.lox.AstPrinter",
    srcs = glob(["kat/jens/lox/*.java"]),
)
