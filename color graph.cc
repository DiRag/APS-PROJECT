
digraph Test {
      rankdir=LR
  H1 [style="rounded,filled",shape=box,fillcolor=blue,label="{ H1 }"]
  H2 [style="rounded,filled",shape=box,fillcolor=blue,label="{ H2 }"]
  H3 [style="rounded,filled",shape=box,fillcolor=blue,label="{ H3 }"]
  S1 [style="rounded,filled",shape=box,fillcolor=yellow,label="{ S1 }"]
  S2 [style="rounded,filled",shape=box,fillcolor=yellow,label="{ S2 }"]
  S3 [style="rounded,filled",shape=box,fillcolor=yellow,label="{ S3 }"]
  S4 [style="rounded,filled",shape=box,fillcolor=yellow,label="{ S4 }"]
  O1 [style="rounded,filled",shape=box,fillcolor=red,label="{ O1 }"]
  O2 [style="rounded,filled",shape=box,fillcolor=red,label="{ O2 }"]
  O3 [style="rounded,filled",shape=box,fillcolor=red,label="{ O3 }"]
  O4 [style="rounded,filled",shape=box,fillcolor=red,label="{ O4 }"]
  H01[style="rounded,filled",shape=box,fillcolor=pink,label="{ HO1 }"]
  H02[style="rounded,filled",shape=box,fillcolor=pink,label="{ HO2 }"]
  H03[style="rounded,filled",shape=box,fillcolor=pink,label="{ HO3 }"]
  H04[style="rounded,filled",shape=box,fillcolor=pink,label="{ HO4 }"]
  M1[style="rounded,filled",shape=box,fillcolor=orange,label="{ M1 }"]
  M2[style="rounded,filled",shape=box,fillcolor=orange,label="{ M2 }"]
  M3[style="rounded,filled",shape=box,fillcolor=orange,label="{ M3 }"]
  M4[style="rounded,filled",shape=box,fillcolor=orange,label="{ M4 }"]

H1-> H2[label="4",color= green, penwidth="1"];
H1-> H3[label="8",color= green, penwidth="1"];
H1-> S2[label="8",color= green, penwidth="1"];
H1-> O2[label="8",color= green, penwidth="1"];
H1-> HO2[label="2",color= green, penwidth="1"];
H2-> H1[label="4",color= yellow, penwidth="1"];
H2-> H3[label="11",color= yellow, penwidth="1"];
H2-> S1[label="8",color= yellow, penwidth="1"];
H2-> S2[label="11",color= yellow, penwidth="1"];
H2-> O2[label="10",color= yellow, penwidth="1"];
H2-> O3[label="12",color= yellow, penwidth="1"];
H2-> HO3[label="4",color= yellow, penwidth="1"];
H3-> H1[label="8",color= pink, penwidth="1"];
H3-> H2[label="11",color= pink, penwidth="1"];
H3-> S2[label="1",color= pink, penwidth="1"];
H3-> S3[label="2",color= pink, penwidth="1"];
H3-> S4[label="6",color= pink, penwidth="1"];
H3-> M1[label="2",color= pink, penwidth="1"];
H3-> M4[label="11",color= pink, penwidth="1"];
H3-> O2[label="8",color= pink, penwidth="1"];
H3-> HO1[label="3",color= pink, penwidth="1"];
S1-> H2[label="8",color= red, penwidth="1"];
S1-> S4[label="7",color= red, penwidth="1"];
S1-> M1[label="4",color= red, penwidth="1"];
S1-> M3[label="7",color= red, penwidth="1"];
S1-> M4[label="2",color= red, penwidth="1"];
S1-> O3[label="8",color= red, penwidth="1"];
S2-> H2[label="11",color= blue, penwidth="1"];
S2-> H3[label="1",color= blue, penwidth="1"];
S2-> S4[label="7",color= blue, penwidth="1"];
S3-> H3[label="2",color= pink, penwidth="1"];
S4-> H3[label="6",color= green, penwidth="1"];
S4-> S1[label="7",color= green, penwidth="1"];
S4-> S2[label="7",color= green, penwidth="1"];
S4-> O1[label="9",color= green, penwidth="1"];
M1-> H3[label="2",color= red, penwidth="1"];

M1-> S1[label="4",color= red, penwidth="1"];
M1-> M2[label="10",color= red, penwidth="1"];

M1-> M3[label="14",color= red, penwidth="1"];
M2-> M1[label="10",color= yellow, penwidth="1"];
M2-> M3[label="9",color= yellow, penwidth="1"];
M2-> M4[label="4",color= yellow, penwidth="1"];
M3-> S1[label="7",color= blue, penwidth="1"];
M3-> M1[label="14",color= blue, penwidth="1"];
M3-> M2[label="9",color= blue, penwidth="1"];
M3-> M4[label="1",color= blue, penwidth="1"];
M4-> H3[label="11",color= purple, penwidth="1"];
M4-> S1[label="2",color= purple, penwidth="1"];
M4-> M2[label="4",color= purple, penwidth="1"];
M4-> M3[label="1",color= purple, penwidth="1"];
O1-> S4[label="9",color= red, penwidth="1"];
O1-> O2[label="2",color= red, penwidth="1"];
O1-> O3[label="3",color= red, penwidth="1"];

O2-> H1[label="8",color= pink, penwidth="1"];
O2-> H2[label="10",color= pink, penwidth="1"];

O2-> H3[label="8",color= pink, penwidth="1"];
O2-> O3[label="2",color= pink, penwidth="1"];
O2-> O4[label="2",color= pink, penwidth="1"];
O3-> H2[label="12",color= yellow, penwidth="1"];
O3-> S1[label="8",color= yellow, penwidth="1"];
O3-> O1[label="3",color= yellow, penwidth="1"];
O3-> O2[label="2",color= yellow, penwidth="1"];

O4-> O2[label="2",color= blue, penwidth="1"];
O4-> HO4[label="9",color= blue, penwidth="1"];
HO1-> H3[label="3",color= pink, penwidth="1"];
HO1-> HO3[label="1",color= pink, penwidth="1"];
HO2-> H1[label="2",color= purple, penwidth="1"];
HO2-> HO3[label="1",color= purple, penwidth="1"];
HO2-> HO4[label="3",color= purple, penwidth="1"];
HO3-> H2[label="9",color= blue, penwidth="1"];
HO3-> HO1[label="1",color= blue, penwidth="1"];
HO3-> HO2[label="1",color= blue, penwidth="1"];
HO3-> HO4[label="2",color= blue, penwidth="1"];
HO4-> M4[label="9",color= purple, penwidth="1"];
HO4-> HO2[label="3",color= purple, penwidth="1"];
HO4-> HO3[label="2",color= purple, penwidth="1"];

}
