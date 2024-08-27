#ifndef STAR_DETAIL_HPP
#define STAR_DETAIL_HPP

class EntityData;

class Detail {
  public:
    void draw(EntityData *entity);

  private:
    char _entityNameInputBuffer[256]{};
};

#endif // STAR_DETAIL_HPP
