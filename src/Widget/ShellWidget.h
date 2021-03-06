#pragma once
#ifndef __ShellWidget_H__
#define __ShellWidget_H__

class ShellWidget
	: public FlowLayoutWidget
{
public:
	ShellWidget(Vector2n Position, TypingModule & TypingModule);
	~ShellWidget();

private:
	ShellWidget(const ShellWidget &) = delete;
	ShellWidget & operator = (const ShellWidget &) = delete;

// HACK that this is public?
public:
	ConnectionWidget<FolderListingPureWidget> * m_WorkingFolder;
	TextFieldWidget * m_CommandWidget;
	TextFieldWidget * m_StdInWidget;
	ButtonWidget * m_ExecuteWidget;
	TextFieldWidget * m_OutputWidget;
};

#endif // __ShellWidget_H__
