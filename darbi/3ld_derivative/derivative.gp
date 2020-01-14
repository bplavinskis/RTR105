set grid
plot [0:2*pi] sin(x/2)
replot [0:2*pi] cos(x/2) title "cos(x/2)"
replot "derivative.dat" every ::1 using 1:2 with lines title "sin(x/2) (num)"
replot "derivative.dat" every ::1 using 1:3 with lines title "sin'(x/2) (num)"
