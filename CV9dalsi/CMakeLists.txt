# CMakeList.txt: Projekt CMake pro CV9dalsi, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (CV9dalsi "CV9dalsi.cpp" "CV9dalsi.h" "VectorMath.h" "VectorMath.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CV9dalsi PROPERTY CXX_STANDARD 20)
endif()

# TODO: V případě potřeby přidejte testy a cíle instalace.
