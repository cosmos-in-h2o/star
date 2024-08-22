# star

![](star.png)

## build

### install requirements

```bash
vcpkg install tbb
```

### edit build file

Change build.py file.
For example:

```python
import os

# enter target which you want to build
target = "star"
# enter your tool chain directory
toolchaindir = "/path/to/vcpkg/scripts/buildsystems/vcpkg.cmake"

if not os.path.exists("build"):
    os.makedirs("build")
os.system(
    f"cmake -G Ninja -B ./build -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE={toolchaindir} && cmake  --build ./build --target {target}")
```

### enter command

```bash
python ./build.py
```