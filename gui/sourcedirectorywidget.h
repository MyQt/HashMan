/**
 * Widget to display and modify an instance of the class SourceDirectory.
 *
 * Johan Lindqvist (johan.lindqvist@gmail.com)
 */

#ifndef SOURCEDIRECTORYWIDGET_H
#define SOURCEDIRECTORYWIDGET_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QLabel;
class SourceDirectory;

class SourceDirectoryWidget : public QWidget
{
   Q_OBJECT

public slots:
   void browseButtonAction();
   void pathStatusChanged(bool status);
   void setDir(QString dirpath);
   void openInExplorer();
   void setDirNode(SourceDirectory* node);
   void setReadOnly(bool enable);

public:
   SourceDirectoryWidget(SourceDirectory* node=0);

signals:
   void pathStatusSignal();

private:
   QLineEdit* lineedit;
   QPushButton* browsebutton;
   QPushButton* openbutton;
   QLabel* validpathlabel;

   QWidget* owner;
   SourceDirectory* dirNode;
};


#endif // SOURCEDIRECTORYWIDGET_H
