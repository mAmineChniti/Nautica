#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QDialog>

namespace Ui {
class accueil;
}

class accueil : public QDialog {
  Q_OBJECT

public:
  explicit accueil(QWidget *parent = nullptr);
  ~accueil();

private:
  Ui::accueil *ui;
};

#endif // ACCUEIL_H
