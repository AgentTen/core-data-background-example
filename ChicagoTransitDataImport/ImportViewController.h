//
//  ViewController.h
//  ChicagoTransitDataImport
//
//  Created by Farley, Ryan on 12/29/15.
//  Copyright © 2015 Farley, Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Store;
@class FetchedResultsTableDataSource;


@interface ImportViewController : UIViewController

@property (nonatomic, strong) Store* store;
@property (weak, nonatomic) IBOutlet UIProgressView *progressIndicator;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)startImport:(id)sender;
- (IBAction)cancel:(id)sender;

@end