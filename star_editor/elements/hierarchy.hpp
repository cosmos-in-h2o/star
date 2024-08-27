#ifndef STAR_HIERARCHY_HPP
#define STAR_HIERARCHY_HPP

class SceneData;

class Hierarchy {
  public:
    void draw(SceneData *scene);
    EntityData *entity;
};

#endif // STAR_HIERARCHY_HPP
