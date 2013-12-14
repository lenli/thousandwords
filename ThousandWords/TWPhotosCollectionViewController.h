//
//  TWPhotosCollectionViewController.h
//  ThousandWords
//
//  Created by Len on 12/14/13.
//  Copyright (c) 2013 LL inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@interface TWPhotosCollectionViewController : UICollectionViewController
@property (strong, nonatomic) Album *album;

- (IBAction)cameraBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
