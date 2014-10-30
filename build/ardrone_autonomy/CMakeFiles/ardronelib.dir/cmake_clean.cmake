FILE(REMOVE_RECURSE
  "CMakeFiles/ardronelib"
  "CMakeFiles/ardronelib-complete"
  "../ardrone/src/ardronelib-stamp/ardronelib-install"
  "../ardrone/src/ardronelib-stamp/ardronelib-mkdir"
  "../ardrone/src/ardronelib-stamp/ardronelib-download"
  "../ardrone/src/ardronelib-stamp/ardronelib-update"
  "../ardrone/src/ardronelib-stamp/ardronelib-patch"
  "../ardrone/src/ardronelib-stamp/ardronelib-configure"
  "../ardrone/src/ardronelib-stamp/ardronelib-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ardronelib.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
