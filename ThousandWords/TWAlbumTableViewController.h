//
//  TWAlbumTableViewController.h
//  ThousandWords
//
//  Created by Len on 12/13/13.
//  Copyright (c) 2013 LL inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWAlbumTableViewController : UITableViewController 

@property (strong, nonatomic) NSMutableArray *albums;

- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
