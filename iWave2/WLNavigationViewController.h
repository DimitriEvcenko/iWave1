//
//  WLNavigationViewController.h
//  iWave2
//
//  Created by Marco Lorenz on 03.05.13.
//  Copyright (c) 2013 Marco Lorenz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WLNavigationProtocol.h"

/** In iWave there is a base navigation concept, that says that user should see news messages and the info about the current application version from every view. Also a logout should be possible on every view. This class contains the base navigation for collection view controller in iWave using the navigation bar.
    From this class should be derived.  */
@interface WLNavigationViewController : UICollectionViewController <WLNavigationProtocol,
                                                                    UIPopoverControllerDelegate,
                                                                    WLDesignGuide>

/**--------------------------------------------------------
 * @name Doing Base Navigation
 *  --------------------------------------------------------
 */
/** The popover controller is needed to show the controllers base navigation can move to. */
@property UIPopoverController *myPopOver;


@end
