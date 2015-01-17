//
//  logger.h
//  C-Template
//
//  Created by Karsten Groll on 13.12.14.
//  Copyright (c) 2014 Karsten Groll. All rights reserved.
//

#ifndef logger_h

void loge(const char* msg, ...);
void logw(const char* msg, ...);
void logi(const char* msg, ...);
void logv(const char* msg, ...);
void logd(const char* msg, ...);

#define logger_h


#endif
