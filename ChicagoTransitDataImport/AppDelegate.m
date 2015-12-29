//
//  AppDelegate.m
//  ChicagoTransitDataImport
//
//  Created by Farley, Ryan on 12/29/15.
//  Copyright © 2015 Farley, Ryan. All rights reserved.
//

#import "AppDelegate.h"

#import "Store.h"
#import "ImportViewController.h"

@interface AppDelegate ()
@property (nonatomic, strong) UINavigationController* navigationController;
@property (nonatomic, strong) Store* store;
@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    
    ImportViewController* importViewController = [[ImportViewController alloc] init];
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:importViewController];
    self.store = [[Store alloc] init];
    importViewController.store = self.store;
    self.window.rootViewController = self.navigationController;
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Saves changes in the application's managed object context before the application terminates.
    [self.store saveContext];
}

@end

