#include <star/core/io/log.hpp>
#include <star/resource/resource_manager.hpp>
using namespace star;

struct Res1 : Resource {
    ~Res1() override {
        if (this->data) {
            delete this->data;
            this->data = nullptr;
        }
        Log::info("~Res1()");
    }
};

struct Res2 : Resource {
    ~Res2() override {
        if (this->data) {
            delete this->data;
            this->data = nullptr;
        }
        Log::info("~Res2()");
    }
};

struct Data {
    char _data[128];
};

int main() {
    Log::init("test");
    STAR_RESOURCE_MANAGER_GUARD
    Data *data1 = new Data;
    Data *data2 = new Data;
    Data *data3 = new Data;
    Data *data4 = new Data;

    Resource *res1 = new Res1;
    res1->data = (char *)(data1);
    res1->size = 128;
    Resource *res2 = new Res1;
    res1->data = (char *)(data2);
    res1->size = 128;
    Resource *res3 = new Res2;
    res1->data = (char *)(data3);
    res1->size = 128;
    Resource *res4 = new Res2;
    res1->data = (char *)(data4);
    res1->size = 128;

    ResourceManager::loadStaticResource<Res1>("res1", res1);
    ResourceManager::loadResource<Res1>("res2", nullptr);
    ResourceManager::loadStaticResource<Res2>("res3", res3);
    ResourceManager::loadStaticResource<Res2>("res4", res4);

    ResourceManager::garbageCollect();

    return 0;
}