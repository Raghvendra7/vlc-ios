/*****************************************************************************
 * VLCPrice.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2024 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import <Foundation/Foundation.h>

@class VLCCurrency;

NS_ASSUME_NONNULL_BEGIN

@interface VLCPrice : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithDictionary:(NSDictionary *)dict forCurrency:(VLCCurrency *)currency;

@property (readonly) NSString *id;
@property (readonly) NSNumber *amount;
@property (readonly) BOOL recurring;

@end

NS_ASSUME_NONNULL_END
