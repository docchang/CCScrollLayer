//
//  CCScrollLayerDelegate.h
//  PopStar Meter
//
//  Created by Dominic Chang on 10/26/12.
//
//

@class CCScrollLayer;

@protocol CCScrollLayerDelegate <NSObject>

@optional

/** Called when scroll layer begins scrolling.
 * Usefull to cancel CCTouchDispatcher standardDelegates.
 */
- (void) scrollLayerScrollingStarted: (CCScrollLayer *) sender;

/** Addition delegate by DC 10-26-2012
 * Called when scroll layer begins scrolling,
 * but page didn't change
 */
- (void) scrollLayerScrollingUnchanged: (CCScrollLayer *) sender;

/** Called at the end of moveToPage:
 * Doesn't get called in selectPage:
 */
- (void) scrollLayer: (CCScrollLayer *) sender
      fromPageNumber: (int) fromPage
        toPageNumber: (int) toPage;

/** Called at the end of moveToPage: From layer object
 * Doesn't get called in selectPage:
 */
- (void) scrollLayerDidChangeFromLayer: (CCScrollLayer *) sender;

/** Called at the end of moveToPage: To layer object
 * Doesn't get called in selectPage:
 */
- (void) scrollLayerDidChangeToLayer: (CCScrollLayer *) sender;

@end
