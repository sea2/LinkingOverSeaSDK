




#import <UIKit/UIKit.h>

typedef enum {
    SDCycleScrollViewPageContolAlimentRight,
    SDCycleScrollViewPageContolAlimentCenter
} SDCycleScrollViewPageContolAliment;

typedef enum {
    SDCycleScrollViewPageContolStyleClassic,        
    SDCycleScrollViewPageContolStyleAnimated,       
    SDCycleScrollViewPageContolStyleNone            
} SDCycleScrollViewPageContolStyle;

@class OATaskAndleView;

@protocol SDCycleScrollViewDelegate <NSObject>

@optional


- (void)cycleScrollView:(OATaskAndleView *)cycleScrollView didSelectItemAtIndex:(NSInteger)index;


- (void)cycleScrollView:(OATaskAndleView *)cycleScrollView didScrollToIndex:(NSInteger)index;









- (Class)customCollectionViewCellClassForCycleScrollView:(OATaskAndleView *)view;


- (UINib *)customCollectionViewCellNibForCycleScrollView:(OATaskAndleView *)view;


- (void)setupCustomCell:(UICollectionViewCell *)cell forIndex:(NSInteger)index cycleScrollView:(OATaskAndleView *)view;

@end

@interface OATaskAndleView : UIView



+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame delegate:(id<SDCycleScrollViewDelegate>)delegate placeholderImage:(UIImage *)placeholderImage;

+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame imageURLStringsGroup:(NSArray *)imageURLStringsGroup;



+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame imageNamesGroup:(NSArray *)imageNamesGroup;


+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame shouldInfiniteLoop:(BOOL)infiniteLoop imageNamesGroup:(NSArray *)imageNamesGroup;




@property (nonatomic, strong) NSArray *imageURLStringsGroup;


@property (nonatomic, strong) NSArray *titlesGroup;


@property (nonatomic, strong) NSArray *localizationImageNamesGroup;







@property (nonatomic, assign) CGFloat autoScrollTimeInterval;


@property (nonatomic,assign) BOOL infiniteLoop;


@property (nonatomic,assign) BOOL autoScroll;


@property (nonatomic, assign) UICollectionViewScrollDirection scrollDirection;

@property (nonatomic, weak) id<SDCycleScrollViewDelegate> delegate;


@property (nonatomic, copy) void (^clickItemOperationBlock)(NSInteger currentIndex);


@property (nonatomic, copy) void (^itemDidScrollOperationBlock)(NSInteger currentIndex);


- (void)makeScrollViewScrollToIndex:(NSInteger)index;


- (void)adjustWhenControllerViewWillAppera;



@property (nonatomic, assign) UIViewContentMode bannerImageViewContentMode;


@property (nonatomic, strong) UIImage *placeholderImage;


@property (nonatomic, assign) BOOL showPageControl;


@property(nonatomic) BOOL hidesForSinglePage;


@property (nonatomic, assign) BOOL onlyDisplayText;


@property (nonatomic, assign) SDCycleScrollViewPageContolStyle pageControlStyle;


@property (nonatomic, assign) SDCycleScrollViewPageContolAliment pageControlAliment;


@property (nonatomic, assign) CGFloat pageControlBottomOffset;


@property (nonatomic, assign) CGFloat pageControlRightOffset;


@property (nonatomic, assign) CGSize pageControlDotSize;


@property (nonatomic, strong) UIColor *currentPageDotColor;


@property (nonatomic, strong) UIColor *pageDotColor;


@property (nonatomic, strong) UIImage *currentPageDotImage;


@property (nonatomic, strong) UIImage *pageDotImage;


@property (nonatomic, strong) UIColor *titleLabelTextColor;


@property (nonatomic, strong) UIFont  *titleLabelTextFont;


@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;


@property (nonatomic, assign) CGFloat titleLabelHeight;


@property (nonatomic, assign) NSTextAlignment titleLabelTextAlignment;


- (void)disableScrollGesture;




+ (void)clearImagesCache;


- (void)clearCache;

@end
