import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QComboBox, QPushButton, QLineEdit
from subprocess import call

class TouchSimulator(QWidget):
    def __init__(self):
        super().__init__()
        
        self.initUI()
        
    def initUI(self):
        self.setGeometry(100, 100, 400, 300)
        self.setWindowTitle('Touch Simulator')
        
        self.lbl = QLabel('Select a brand:', self)
        self.lbl.move(20, 20)
        
        self.combo = QComboBox(self)
        self.combo.addItem('Dell')
        self.combo.addItem('HP')
        self.combo.move(20, 50)
        
        self.search_label = QLabel('Search:', self)
        self.search_label.move(20, 90)
        
        self.search_box = QLineEdit(self)
        self.search_box.move(60, 90)
        self.search_box.textChanged.connect(self.updateCombo)
        
        self.btn = QPushButton('Run', self)
        self.btn.move(150, 150)
        self.btn.clicked.connect(self.runScript)
        
        self.show()
        
    def runScript(self):
        brand = self.combo.currentText()
        if brand == 'Dell':
            call(["python", "DellPy.py"])
        elif brand == 'HP':
            call(["python", "HPpy.py"])
    
    def updateCombo(self, text):
        self.combo.clear()
        self.combo.addItem('Dell')
        self.combo.addItem('HP')
        for i in range(self.combo.count()):
            item = self.combo.itemText(i)
            if text.lower() not in item.lower():
                self.combo.removeItem(i)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = TouchSimulator()
    sys.exit(app.exec_())
