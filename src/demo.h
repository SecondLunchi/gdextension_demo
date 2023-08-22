#ifndef DEMO_H
#define DEMO_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace  godot {
    class DEMO : public Sprite2D {
        GDCLASS(DEMO, Sprite2D)

        private:
            int sample;
        
        protected:
            static void _bind_methods();
        
        public:
            DEMO();
            ~DEMO();

            int get_sample();
            void set_sample(int value);

    };
    
}
#endif