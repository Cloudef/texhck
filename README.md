## TEXhck

Texture compression library

## Building

    mkdir target && cd target                # - create build target directory
    cmake -DCMAKE_INSTALL_PREFIX=build ..    # - run CMake, set install directory
    make                                     # - compile

## TODO
* Add tests
* Support more formats ETC, PVRTC, ASTC

## License

zlib, see LICENSE file for more information

## Thanks to
* [SOIL][] - Simple OpenGL Image Library (DXT1, DXT5)
