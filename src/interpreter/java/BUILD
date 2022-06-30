load("@rules_java//java:defs.bzl", "java_binary")

package(default_visibility = ["//visibility:public"])

java_binary(
    name = "jlox",
    srcs = glob(["kat/jens/lox/*.java"]),
    main_class = "kat.jens.lox.Lox",
)

java_binary(
    name = "ast_printer",
    srcs = glob(["kat/jens/lox/*.java"]),
    main_class = "kat.jens.lox.AstPrinter",
)
