#pragma once

#include <godot_cpp/classes/ref.hpp>
#include "PDJE_interface.hpp"
#include "FXArgWrapper.hpp"
namespace godot{

class FXWrapper : public RefCounted{
    GDCLASS(FXWrapper, RefCounted)
private:
    FXControlPannel* fxpannel = nullptr;
protected:
    static void _bind_methods();

public:
    
    FXWrapper() = default;
    void Init(FXControlPannel* refobj);
    bool CheckFXOn();
    bool FX_ON_OFF(int fx, bool onoff);
    Ref<FXArgWrapper> GetArgSetter(int fx);
    ~FXWrapper() = default;
    
};


};