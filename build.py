import os
target="sandbox"
if not os.path.exists("build"):
    os.makedirs("build")
os.system(f"cmake -G Ninja -B ./build -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Debug && cmake  --build ./build --target {target}")

