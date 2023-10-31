//
//  MQTTClient.h
//  MQTTClient
//
//  Created by Christoph Krey on 13.01.14.
//  Copyright © 2013-2017 Christoph Krey. All rights reserved.
//

/**
 Include this file to use MQTTClient classes in your application
 
 @author Christoph Krey c@ckrey.de
 @see http://mqtt.org
 */

#import <Foundation/Foundation.h>

#import "_MQTTSession.h"
#import "_MQTTDecoder.h"
#import "MQTTSessionLegacy.h"
#import "MQTTSessionSynchron.h"
#import "_MQTTProperties.h"
#import "_MQTTMessage.h"
#import "_MQTTTransport.h"
#import "_MQTTCFSocketTransport.h"
#import "_MQTTCoreDataPersistence.h"
#import "_MQTTSSLSecurityPolicyTransport.h"
#import "_MQTTLog.h"

#if __has_include("_MQTTSessionManager.h")
#import "_MQTTSessionManager.h"
#endif

//! Project version number for MQTTClient.
FOUNDATION_EXPORT double _MQTTClientVersionNumber;

//! Project version string for MQTTClient&lt;.
FOUNDATION_EXPORT const unsigned char _MQTTClientVersionString[];

