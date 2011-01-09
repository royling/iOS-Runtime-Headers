/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIResponder, CalendarNotesCell;



@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate>
{
    CalendarNotesCell *_cell;
    UIResponder *_selectedTextField;
}

@property(retain) UIResponder *selectedResponder;


- (BOOL)isInline;
- (void)reset;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (void)dealloc;
- (id)selectedResponder;
- (void)setSelectedResponder:(id)arg1;
- (id)selectedTextField;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;

@end