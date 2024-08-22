import os

class Target:
    def __init__(self):
        self.name=""
        self.toolchain = ""
        self.type = "Debug"
        self.buildDir = "build"

    def build(self):
        if not os.path.exists(self.buildDir):
            os.makedirs(self.buildDir)
        if self.toolchain=="":
            os.system(
                f"cmake -G Ninja -B ./build -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE={self.type} && cmake  --build ./build --target {self.name}")
        else:
            os.system(
                f"cmake -G Ninja -B ./build -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE={self.type} -DCMAKE_TOOLCHAIN_FILE={self.toolchain} && cmake  --build ./build --target {self.name}")

star=Target()
star.name="star"
star.toolchain="D:/scoop/apps/vcpkg/current/scripts/buildsystems/vcpkg.cmake"
targetList=[star]

for i in targetList:
    i.build()