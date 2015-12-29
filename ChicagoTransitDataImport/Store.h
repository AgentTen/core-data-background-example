//
//  Store.h
//  ChicagoTransitDataImport
//
//  Created by Farley, Ryan on 12/29/15.
//  Copyright © 2015 Farley, Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Store : NSObject

@property (nonatomic,strong,readonly) NSManagedObjectContext* mainManagedObjectContext;

- (void)saveContext;
- (NSManagedObjectContext*)newPrivateContext;
@end
