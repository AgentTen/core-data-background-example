//
//  ImportOperation.h
//  ChicagoTransitDataImport
//
//  Created by Farley, Ryan on 12/29/15.
//  Copyright © 2015 Farley, Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Store;


@interface ImportOperation : NSOperation
- (id)initWithStore:(Store*)store fileName:(NSString*)name;
@property (nonatomic) float progress;
@property (nonatomic, copy) void (^progressCallback) (float);
@end