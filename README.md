# BridgeDemo

Demonstration of BridgeDemo Design Pattern.

## Instalation

Use git to install BridgeDemo.

```git
git clone https://github.com/VSidd976/BridgeDemo.git
```

### Dependencies

- **C++17 or later** compiler (e.g. GCC, Clang or MSVC)
- **CMake**

#### macOs instalation

```bash
brew install cmake
```

#### Linux (Ubuntu/Debian) instalation

```bash
sudo apt install build-essential cmake
```

#### Windows instalation

```cmd
winget install Microsoft.VisualStudio.2022.Community
winget install Kitware.CMake
```

## Executing

In root directory of the project open terminal and execute following commands.

### Unix

```bash
mkdir build
cd build
cmake ..
cmake --build .
cd app
./Executable
```

### Windows

```cmd
mkdir build
cd build
cmake ..
cmake --build . --config Release
cd app
cd Release
./Executable
```
