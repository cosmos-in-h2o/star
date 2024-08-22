#ifndef STAR_APPLICATION_HPP
#define STAR_APPLICATION_HPP

namespace star {
class Application {
  public:
    virtual int run(int argc, char **argv) = 0;
};
} // namespace star

#endif // STAR_APPLICATION_HPP