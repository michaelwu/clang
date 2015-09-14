// RUN: c-index-test -test-print-visibility %s | FileCheck %s

__attribute__ ((visibility ("default"))) void foo1();
__attribute__ ((visibility ("protected"))) void foo2();
__attribute__ ((visibility ("hidden"))) void foo3();

// CHECK: FunctionDecl=foo1:3:47visibility=Default
// CHECK: FunctionDecl=foo2:4:49visibility=Protected
// CHECK: FunctionDecl=foo3:5:46visibility=Hidden
