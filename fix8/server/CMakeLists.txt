add_executable(server
  SERVER_classes.cpp
  SERVER_types.cpp
  SERVER_traits.cpp
  server.cpp
  main.cpp
  )

target_link_libraries(server
  /usr/local/lib/fix8_new/libfix8.so
  pthread
  libPocoFoundation.so
  libPocoNet.so
  )

SET(EXECUTABLE_OUTPUT_PATH ../../config/)
