set grid
plot [0:2*pi] sin(x)*sin(x)*cos(x)*cos(x)
replot [0:2*pi] 2*sin(x)*cos(x)*pow(2,cos(x))+pow(2,sin(x))*2*(cos(x))*(-sin(x))
replot "derivative.data" every ::1 using 1:2 with lines title "sin^2(x)*cos^2(x) (num)"
replot "derivative.data" every ::1 using 1:3 with lines title "(sin^2(x)*cos^2(x))' (num)"
