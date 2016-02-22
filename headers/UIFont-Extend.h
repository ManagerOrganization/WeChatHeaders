//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIFont.h"

@interface UIFont (Extend)
+ (void)loadOldFontSet:(unsigned int)arg1;
+ (void)copyFontSetToLocalInfo;
+ (void)setIpadClassic:(_Bool)arg1;
+ (unsigned int)getWebviewFontScale;
+ (void)setAppFontSize:(unsigned int)arg1 andBackTab:(int)arg2;
+ (void)setAppFontSize:(unsigned int)arg1;
+ (double)getNormalFontSizeByLevel:(unsigned int)arg1;
+ (double)getNormalFontSizeByLevelForTimeline:(unsigned int)arg1;
+ (double)getNormalFontSize:(int)arg1;
+ (double)getNormalFontSize;
+ (_Bool)useDynamicSize;
+ (_Bool)useDynamicSize:(int)arg1;
+ (double)dynamicFontSize:(double)arg1;
+ (double)dynamicFontSize:(double)arg1 forModule:(int)arg2;
+ (double)dynamicLength:(double)arg1;
+ (double)dynamicLength:(double)arg1 forModule:(int)arg2;
+ (id)dynamicBoldSystemFontOfSize:(double)arg1;
+ (id)dynamicSystemFontOfSize:(double)arg1;
+ (id)dynamicBoldSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicSettingFont:(double)arg1;
+ (id)settingFont:(double)arg1;
+ (id)systemLittleFont;
+ (id)systemSmallFont;
+ (id)systemFont;
+ (id)systemBoldBigFont;
+ (id)fontMonacoOfSize:(double)arg1;
+ (id)fontBaskervilleSemiBoldOfSize:(double)arg1;
+ (id)fontGeorgiaBoldOfSize:(double)arg1;
+ (id)fontHiraKakuProNW3OfSize:(double)arg1;
+ (id)fontCochinBoldOfSize:(double)arg1;
@end
