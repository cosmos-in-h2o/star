#include <glm/glm.hpp>
#include <iostream>

int main() {
    glm::mat3 trans = {1, 0, 0, 0, 1, 0, 1, 1, 1};
    glm::vec3 vec = {1, 1, 1};
    glm::vec3 ans=trans*vec;
    std::cout<<ans.x<<std::endl;
    std::cout<<ans.y<<std::endl;
    std::cout<<ans.z<<std::endl;
    return 0;
}
