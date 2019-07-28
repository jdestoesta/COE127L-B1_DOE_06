import matplotlib.pyplot as plt
import csv
x =[]
y = []

with open('Sample.txt','r') as txtfile:
	plots = csv.reader(txtfile,delimiter = ',')
	for row in plots:
		x.append(int(row[0]))
		y.append(int(row[1]))
	
	plt.plot(x,y, label = 'TimeVSProcess')
	plt.xlabel('Trial')
	plt.ylabel('Time(ms)')
	plt.title('DOE')
	plt.legend()
	plt.show()
