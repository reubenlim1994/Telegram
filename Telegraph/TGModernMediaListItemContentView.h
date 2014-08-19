#import <UIKit/UIKit.h>

#import "TGModernMediaListItem.h"

@interface TGModernMediaListItemContentView : UIView

@property (nonatomic, strong) id<TGModernMediaListItem> item;
@property (nonatomic) bool isHidden;

- (void)prepareForReuse;
- (void)updateItem;

@end
