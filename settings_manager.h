#ifndef __XSETTINGSD_SETTINGS_MANAGER_H__
#define __XSETTINGSD_SETTINGS_MANAGER_H__

#include <map>
#include <string>

#include "common.h"
#include "setting.h"

namespace xsettingsd {

class Setting;

class SettingsManager {
 public:
  SettingsManager();

  bool UpdateProperty();

 private:
  SettingsMap settings_;

  uint32 serial_;
};

}  // namespace xsettingsd

#endif
