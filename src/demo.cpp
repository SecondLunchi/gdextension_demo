#include "demo.h"
#include <godot_cpp/core/class_db.hpp>

namespace godot {

    //バインド
    void DEMO::_bind_methods() {
        //関数のバインド
        ClassDB::bind_method(D_METHOD("get_sample"), &DEMO::get_sample);
        ClassDB::bind_method(D_METHOD("set_sample", "value"), &DEMO::set_sample);
        //セッターとゲッター
        ClassDB::add_property("DEMO", PropertyInfo(Variant::INT, "sample"), "set_sample", "get_sample");
    }

    //コンストラクト
    DEMO::DEMO() {
        sample = 0;
    }

    //デコンストラクト
    DEMO::~DEMO() {
    }

    //ゲッター
    int DEMO::get_sample() {
        return sample;
    }

    //セッター
    void DEMO::set_sample(int value) {
        sample = value;
    }

}
