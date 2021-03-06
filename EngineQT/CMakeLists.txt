set(PROJECT_NAME RefEngineQT)
project(${PROJECT_NAME})


# --- QT setup ---
# http://stackoverflow.com/questions/25989448/implementing-qt-project-through-cmake
# http://doc.qt.io/qt-5/cmake-manual.html 

# --- Project setup ---
include_directories(src/)

file(GLOB_RECURSE SOURCES "src/*.c*")
file(GLOB_RECURSE HEADERS "src/*.h")
file(GLOB_RECURSE UIS "src/*.ui")

# AUTO_MOC/AUTO_UIC fails in subdirs! Do it manually
qt5_wrap_cpp(Window_hdr_moc ${HEADERS})
qt5_wrap_ui (Window_ui_moc  ${UIS})

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${Window_hdr_moc} ${Window_ui_moc})
source_group(Headers FILES ${HEADERS} ${Window_ui_moc})
source_group(Source FILES ${SOURCES} ${Window_hdr_moc})

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_link_libraries (${PROJECT_NAME} RefEngine)

# --- QT setup ---
get_target_property(QtCore_location Qt5::Core LOCATION_Debug)
get_target_property(QtWidgets_location Qt5::Widgets LOCATION_Debug)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

