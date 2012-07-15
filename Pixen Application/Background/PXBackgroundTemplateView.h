//
//  PXBackgroundTemplateView.h
//  Pixen
//

#import <Cocoa/Cocoa.h>

@class PXBackground, PXBackgroundPreviewView;

@interface PXBackgroundTemplateView : NSView
{
  @private
	PXBackground *background;
	IBOutlet NSView *view;
	IBOutlet NSTextField *__weak templateNameField, *__weak templateClassNameField;
	IBOutlet PXBackgroundPreviewView *__weak imageView;
	BOOL _highlighted;
}

@property (nonatomic, strong) PXBackground *background;

@property (weak, nonatomic) IBOutlet NSTextField *templateNameField;
@property (weak, nonatomic) IBOutlet NSTextField *templateClassNameField;
@property (weak, nonatomic) IBOutlet PXBackgroundPreviewView *imageView;

@property (nonatomic, getter=isHighlighted, assign) BOOL highlighted;

@end
