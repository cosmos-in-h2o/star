# star

![](star.png)

## build

requirements list:

- python
- cmake
- ninja(or make,msbuild...)
- vcpkg(if windows)

### install requirements

```bash
vcpkg install tbb
```

If linux or macos,you can use corresponding package manager to install tbb.

### edit build file

Change build.py file.
For example:

```python
# add these code
star = Target()
star.name = "star"
# if linux or macos,you can enter empty string
star.toolchain = "/path/to/your/vcpkg/scripts/buildsystems/vcpkg.cmake"
```

### enter command

```bash
python ./build.py
```