// Auto generated file, don't modify.

#include "SFML/Audio.hpp"
#include "SFML/Config.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Network.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/System/Lock.hpp"

#include "cpgf/metadata/sfml/meta_sfml_Lock.h"

using namespace cpgf;

namespace meta_sfml { 


GDefineMetaInfo createMetaClass_Lock()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<sf::Lock> _nd = GDefineMetaClass<sf::Lock>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("Lock");
        buildMetaClass_Lock(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_sfml


