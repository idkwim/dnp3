//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef OPENDNP3_EVENTFROZENCOUNTERRESPONSE_H
#define OPENDNP3_EVENTFROZENCOUNTERRESPONSE_H

#include <cstdint>

namespace opendnp3 {

enum class EventFrozenCounterResponse : int
{
  Group23Var1 = 0,
  Group23Var2 = 1,
  Group23Var5 = 2,
  Group23Var6 = 3
};

int EventFrozenCounterResponseToType(EventFrozenCounterResponse arg);
EventFrozenCounterResponse EventFrozenCounterResponseFromType(int arg);

}

#endif
