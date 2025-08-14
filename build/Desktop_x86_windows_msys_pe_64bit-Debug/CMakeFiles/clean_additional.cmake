# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GRE3000FightingGame_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GRE3000FightingGame_autogen.dir\\ParseCache.txt"
  "GRE3000FightingGame_autogen"
  )
endif()
