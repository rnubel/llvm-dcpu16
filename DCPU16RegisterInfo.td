// DCPU16 Register Definitions

class DCPU16Reg<bits<4> num, string n> : Register<n> {
  field bits<4> Num = num;
  let Namespace = "DCPU16";
}



def PC  : DCPU16Reg<0,  "PC">;
def SP  : DCPU16Reg<1,  "SP">;
def O   : DCPU16Reg<2,  "O">;
def A   : DCPU16Reg<3,  "A">;
def B   : DCPU16Reg<4,  "B">;
def C   : DCPU16Reg<5,  "C">;
def X   : DCPU16Reg<6,  "X">;
def Y   : DCPU16Reg<7,  "Y">;
def Z   : DCPU16Reg<8,  "Z">;
def I   : DCPU16Reg<9,  "I">;
def J   : DCPU16Reg<10, "J">;


def IntRegs : RegisterClass<"DCPU16", [i16], 16,
  (add O, A, B, C, X, Y, Z, I, J, PC, SP)>;
