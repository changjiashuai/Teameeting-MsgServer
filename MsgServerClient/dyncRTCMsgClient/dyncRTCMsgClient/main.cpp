//
//  main.cpp
//  dyncRTCMsgClient
//
//  Created by hp on 12/22/15.
//  Copyright (c) 2015 Dync. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include "webrtc/base/logging.h"
#include "RTConnClientManager.hpp"

#define KRUN 1
#define KRUNONCE 2
#define KRUNTHREAD 3
#define KRUNAPPLYROOM 4
#define KRUNLOGINOUT 5

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    rtc::LogMessage::LogToDebug(rtc::INFO);
    RTConnClientManager manager;
    manager.RunTest(KRUNLOGINOUT);
    LOG(INFO) << "bye bye client...";
    return 0;
}
