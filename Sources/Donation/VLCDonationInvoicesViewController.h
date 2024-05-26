/*****************************************************************************
 * VLCDonationPreviousChargesViewController.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2024 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import <UIKit/UIKit.h>

@class VLCInvoice;
@class VLCCharge;

NS_ASSUME_NONNULL_BEGIN

@interface VLCDonationInvoicesViewController : UITableViewController

- (void)setInvoices:(NSArray <VLCInvoice *>*)invoices;
- (void)setCharges:(NSArray <VLCCharge *>*)charges;

@end

NS_ASSUME_NONNULL_END
