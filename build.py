import os

target = "StarEditor"
toolchaindir = "D:/scoop/apps/vcpkg/current/scripts/buildsystems/vcpkg.cmake"

if not os.path.exists("build"):
    os.makedirs("build")
os.system(
    f"cmake -G Ninja -B ./build -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE={toolchaindir} && cmake  --build ./build --target {target}")
