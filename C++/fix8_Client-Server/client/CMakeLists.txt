add_executable(client
  CLIENT_classes.cpp
  CLIENT_types.cpp
  CLIENT_traits.cpp
  client.cpp
  main.cpp
  )

target_link_libraries(client
  /usr/local/lib/fix8_new/libfix8.so
  pthread
  libPocoFoundation.so
  libPocoNet.so
  )

SET(EXECUTABLE_OUTPUT_PATH ../../config/)
