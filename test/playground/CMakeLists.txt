#======================= Cmake Setup for sfml =======================#
cmake_minimum_required (VERSION 3.21)
# cmake_policy (SET CMP0015 NEW)
# cmake_policy (SET CMP0016 NEW)

# In most cases better set paths in the CMake cache

#Project name
set (TARGET_NAME ParticleSystem)
set(CMAKE_VERBOSE_MAKEFILE ON)
# set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Make sure CMake will take care of moc for us
# set (CMAKE_AUTOMOC ON)

# Make sure CMake will take care of rcc for us
# set (CMAKE_AUTORCC ON)

# Make sure CMake will take care of uic for us
# set (CMAKE_AUTOUIC ON)

# Set the CXX standard, Qt 6 I believe uses c++ 17
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

project (
    ${TARGET_NAME}
    VERSION 0.0.1
    DESCRIPTION "My SFML Based Particle System."
    LANGUAGES CXX
)

message (CMAKE_SOURCE_DIR=${CMAKE_SOURCE_DIR})
message (CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR})

include_directories (
    /usr/local/include
	# F:/All_Projects_Source/Cpp_Tuts/randomProjects/seraEngine
    # F:/All_Projects_Source/Cpp_Tuts/randomProjects/seraEngine/include
    F:/All_Projects_Source/Cpp_Tuts/randomProjects/seraEngine/deps/SFML-2.5.1/include
)

message ("#======================= Adding Boost Libraries ======================#")
# Adding Boost Libraries

# add_subdirectory (${CMAKE_SOURCE_DIR}/deps/boost EXCLUDE_FROM_ALL)
# set (Boost_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/deps/boost)

set (Boost_USE_STATIC_LIBS OFF) 
set (Boost_USE_MULTITHREADED ON)  
set (Boost_USE_STATIC_RUNTIME OFF)
find_package (Boost COMPONENTS system ) # REQUIRED)
if(Boost_FOUND)
    message (STATUS "boost lib: ${Boost_LIBRARIES}")
    message (STATUS "boost inc: ${Boost_INCLUDE_DIR}")
    include_directories (${Boost_INCLUDE_DIR})
elseif(NOT Boost_FOUND)
    # message (FATAL_ERROR "Boost Not found")
    message (WARNING "Boost Not found")
endif()

message ("#======================= Adding sfml Libraries =======================#")
# Adding sfml Libraries

# add_subdirectory (${CMAKE_SOURCE_DIR}/deps/SFML EXCLUDE_FROM_ALL)
# set (SFML_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/deps/SFML)

# set (SFML_DIR "F:/All_Projects_Source/Cpp_Tuts/randomProjects/seraEngine/deps/SFML-2.5.1/build")
set (SFML_DIR "F:/All_Projects_Source/Cpp_Tuts/randomProjects/seraEngine/deps/sfmllib/SFML-2.5.1/lib/cmake/SFML")
set (BUILD_SHARED_LIBS FALSE)
set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_USE_STATIC_STD_LIBS TRUE)
find_package (SFML 2.5 COMPONENTS system window network graphics audio REQUIRED)
if(NOT SFML_FOUND)
    # message (FATAL_ERROR "sfml Not found")
    message (WARNING "sfml Not found")
endif()

message ("#======================= Adding Engine Source ========================#")
#[[
set (ENGINE_MODULE_CORE_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/src/Core")
message (STATUS ENGINE_MODULE_CORE_PREFIX=${ENGINE_MODULE_CORE_PREFIX})
set (
    ENGINE_MODULE_CORE
    ${ENGINE_MODULE_CORE_PREFIX}/Game.cpp
    ${ENGINE_MODULE_CORE_PREFIX}/Object.cpp
)

set (ENGINE_MODULE_MATH_PREFIX "F:/All_Projects_Source/Cpp_Tuts/randomProjects/seraEngine/src/Math")
message (STATUS ENGINE_MODULE_MATH_PREFIX=${ENGINE_MODULE_MATH_PREFIX})
set (
    ENGINE_MODULE_MATH
    ${ENGINE_MODULE_MATH_PREFIX}/Line2.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Line3.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Mat3.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Mat3.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Point2.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Point3.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Polygon.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Quaternion.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Vector2.cpp
    ${ENGINE_MODULE_MATH_PREFIX}/Vector3.cpp
)

set (ENGINE_MODULE_PHYSICS2D_COLLIDER_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/src/Physics2D/Collider")
message (STATUS ENGINE_MODULE_PHYSICS2D_COLLIDER_PREFIX=${ENGINE_MODULE_PHYSICS2D_COLLIDER_PREFIX})
set (
    ENGINE_MODULE_PHYSICS2D_COLLIDER
    ${ENGINE_MODULE_PHYSICS2D_COLLIDER_PREFIX}/Collider.cpp
)

set (ENGINE_MODULE_PHYSICS2D_PRIMITIVES_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/src/Physics2D/Primitives")
message (STATUS ENGINE_MODULE_PHYSICS2D_PRIMITIVES_PREFIX=${ENGINE_MODULE_PHYSICS2D_PRIMITIVES_PREFIX})
set (
    ENGINE_MODULE_PHYSICS2D_PRIMITIVES
    ${ENGINE_MODULE_PHYSICS2D_PRIMITIVES_PREFIX}/AABB.cpp
    ${ENGINE_MODULE_PHYSICS2D_PRIMITIVES_PREFIX}/Circle.cpp
)

set (ENGINE_MODULE_PHYSICS2D_RIGIDBODY_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/src/Physics2D/RigidBody")
message (STATUS ENGINE_MODULE_PHYSICS2D_RIGIDBODY_PREFIX=${ENGINE_MODULE_PHYSICS2D_RIGIDBODY_PREFIX})
set (
    ENGINE_MODULE_PHYSICS2D_RIGIDBODY
    ${ENGINE_MODULE_PHYSICS2D_RIGIDBODY_PREFIX}/RigidBody.cpp
)

set (ENGINE_MODULE_UTILS_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/src/Utils")
message (STATUS ENGINE_MODULE_UTILS_PREFIX=${ENGINE_MODULE_UTILS_PREFIX})
set (
    ENGINE_MODULE_UTILS
    ${ENGINE_MODULE_UTILS_PREFIX}/Log.cpp
    ${ENGINE_MODULE_UTILS_PREFIX}/Timer.cpp    
)
]]

message ("#======================= Adding to executable ========================#")

add_executable (
    ${TARGET_NAME}
    # ${ENGINE_SOURCE_FILES}
    particle/particle.cpp
    # ${ENGINE_MODULE_MATH}
)

message ("#======================= Setting Compiler Options ====================#")

if(MSVC)
    target_compile_options (${TARGET_NAME} PRIVATE /W4 ) # /WX)
else()
    target_compile_options (${TARGET_NAME} PRIVATE -Wall -Wextra -pedantic -Werror )
endif()

set_target_properties (${TARGET_NAME}  PROPERTIES DEBUG_OUTPUT_NAME "${TARGET_NAME}d" RELEASE_OUTPUT_NAME ${TARGET_NAME})

message ("#======================= Linking target Libs =========================#")

target_link_libraries (
    ${TARGET_NAME}
    PRIVATE
    # boost::system
    # boost::lambda
    sfml-system
    sfml-window
    sfml-network
    sfml-graphics
    sfml-audio
)
