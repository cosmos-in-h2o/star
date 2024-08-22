#include "star/driver/opengl/vertex_layout.hpp"

namespace star {
void vertexAttribBind(VertexLayout layout) {
    switch (layout) {
    case VertexLayout::P3fC4fT2f: {
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 9 * sizeof(float),
                              (void *)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 9 * sizeof(float),
                              (void *)(7 * sizeof(float)));
        glEnableVertexAttribArray(2);
        break;
    }
    case VertexLayout::P3fT2f: {
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float),
                              (void *)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P3fC4f: {
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 7 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 7 * sizeof(float),
                              (void *)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P3f: {
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);
        break;
    }

    case VertexLayout::P2fC4fT2f: {
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 8 * sizeof(float),
                              (void *)(2 * sizeof(float)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float),
                              (void *)(6 * sizeof(float)));
        glEnableVertexAttribArray(2);
        break;
    }
    case VertexLayout::P2fT2f: {
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float),
                              (void *)(2 * sizeof(float)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P2fC4f: {
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 6 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 6 * sizeof(float),
                              (void *)(2 * sizeof(float)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P2f: {
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float),
                              nullptr);
        glEnableVertexAttribArray(0);
        break;
    }

    case VertexLayout::P3iC4fT2f: {
        glVertexAttribPointer(0, 3, GL_INT, GL_FALSE,
                              3 * sizeof(int) + 6 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              3 * sizeof(int) + 6 * sizeof(float),
                              (void *)(3 * sizeof(int)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE,
                              3 * sizeof(int) + 6 * sizeof(float),
                              (void *)(3 * sizeof(int) + 4 * sizeof(float)));
        glEnableVertexAttribArray(2);
        break;
    }
    case VertexLayout::P3iT2f: {
        glVertexAttribPointer(0, 3, GL_INT, GL_FALSE,
                              3 * sizeof(int) + 2 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE,
                              3 * sizeof(int) + 2 * sizeof(float),
                              (void *)(3 * sizeof(int)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P3iC4f: {
        glVertexAttribPointer(0, 3, GL_INT, GL_FALSE,
                              3 * sizeof(int) + 4 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              3 * sizeof(int) + 4 * sizeof(float),
                              (void *)(3 * sizeof(int)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P3i: {
        glVertexAttribPointer(0, 3, GL_INT, GL_FALSE, 3 * sizeof(int), nullptr);
        glEnableVertexAttribArray(0);
        break;
    }

    case VertexLayout::P2iC4fT2f: {
        glVertexAttribPointer(0, 2, GL_INT, GL_FALSE,
                              2 * sizeof(int) + 6 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              2 * sizeof(int) + 6 * sizeof(float),
                              (void *)(2 * sizeof(int)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE,
                              2 * sizeof(int) + 6 * sizeof(float),
                              (void *)(2 * sizeof(int) + 4 * sizeof(float)));
        glEnableVertexAttribArray(2);
        break;
    }
    case VertexLayout::P2iT2f: {
        glVertexAttribPointer(0, 2, GL_INT, GL_FALSE,
                              2 * sizeof(int) + 2 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE,
                              2 * sizeof(int) + 2 * sizeof(float),
                              (void *)(2 * sizeof(int)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P2iC4f: {
        glVertexAttribPointer(0, 2, GL_INT, GL_FALSE,
                              2 * sizeof(int) + 4 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              2 * sizeof(int) + 4 * sizeof(float),
                              (void *)(2 * sizeof(int)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P2i: {
        glVertexAttribPointer(0, 2, GL_INT, GL_FALSE, 2 * sizeof(int), nullptr);
        glEnableVertexAttribArray(0);
        break;
    }

    case VertexLayout::P3dC4fT2f: {
        glVertexAttribPointer(0, 3, GL_DOUBLE, GL_FALSE,
                              3 * sizeof(double) + 6 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              3 * sizeof(double) + 6 * sizeof(float),
                              (void *)(3 * sizeof(double)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE,
                              3 * sizeof(int) + 6 * sizeof(float),
                              (void *)(3 * sizeof(double) + 4 * sizeof(float)));
        glEnableVertexAttribArray(2);
        break;
    }
    case VertexLayout::P3dT2f: {
        glVertexAttribPointer(0, 3, GL_DOUBLE, GL_FALSE,
                              3 * sizeof(double) + 2 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE,
                              3 * sizeof(double) + 2 * sizeof(float),
                              (void *)(3 * sizeof(double)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P3dC4f: {
        glVertexAttribPointer(0, 3, GL_DOUBLE, GL_FALSE,
                              3 * sizeof(double) + 4 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              3 * sizeof(double) + 4 * sizeof(float),
                              (void *)(3 * sizeof(double)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P3d: {
        glVertexAttribPointer(0, 3, GL_DOUBLE, GL_FALSE, 3 * sizeof(double),
                              nullptr);
        glEnableVertexAttribArray(0);
        break;
    }

    case VertexLayout::P2dC4fT2f: {
        glVertexAttribPointer(0, 2, GL_DOUBLE, GL_FALSE,
                              2 * sizeof(double) + 6 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              2 * sizeof(double) + 6 * sizeof(float),
                              (void *)(2 * sizeof(double)));
        glEnableVertexAttribArray(1);

        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE,
                              2 * sizeof(double) + 6 * sizeof(float),
                              (void *)(2 * sizeof(double) + 4 * sizeof(float)));
        glEnableVertexAttribArray(2);
        break;
    }
    case VertexLayout::P2dT2f: {
        glVertexAttribPointer(0, 2, GL_INT, GL_FALSE,
                              2 * sizeof(double) + 2 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE,
                              2 * sizeof(double) + 2 * sizeof(float),
                              (void *)(2 * sizeof(double)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P2dC4f: {
        glVertexAttribPointer(0, 2, GL_DOUBLE, GL_FALSE,
                              2 * sizeof(double) + 4 * sizeof(float), nullptr);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,
                              2 * sizeof(double) + 4 * sizeof(float),
                              (void *)(2 * sizeof(double)));
        glEnableVertexAttribArray(1);
        break;
    }
    case VertexLayout::P2d: {
        glVertexAttribPointer(0, 2, GL_DOUBLE, GL_FALSE, 2 * sizeof(double),
                              nullptr);
        glEnableVertexAttribArray(0);
        break;
    }
    default:
        break;
    }
}
} // namespace star