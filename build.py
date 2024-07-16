import os
target="star"
if not os.path.exists("build"):
    os.makedirs("build")
os.system(f"cmake -G Ninja --target {target} --build ./build -DCMAKE_BUILD_TYPE=Debug")
