cmake_minimum_required(VERSION 3.10)
project(MyProtoApp)

find_package(Protobuf REQUIRED)

# Compile the .proto file to C++ sources
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS proto/message.proto)

add_executable(my_program src/main.cpp ${PROTO_SRCS} ${PROTO_HDRS})

target_include_directories(my_program PRIVATE ${Protobuf_INCLUDE_DIRS})
target_link_libraries(my_program PRIVATE ${Protobuf_LIBRARIES})
