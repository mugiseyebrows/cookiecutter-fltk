# {{cookiecutter.project_name}}

# Build

Release
```
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release -B Release -DCMAKE_PREFIX_PATH=/path/to/fltk
cmake --build Release
```

Debug
```
cmake -G Ninja -DCMAKE_BUILD_TYPE=Debug -B Debug -DCMAKE_PREFIX_PATH=/path/to/fltk
cmake --build Debug
```