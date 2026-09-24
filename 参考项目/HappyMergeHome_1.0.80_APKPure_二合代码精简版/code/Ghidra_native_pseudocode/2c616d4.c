
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c716d4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar3 = (char *)(_UNK_02c71af4 + 0x2c716f4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c71af8 + 0x2c71708));
    func_0x01438628(*(undefined4 *)(_UNK_02c71afc + 0x2c71714));
    func_0x01438628(*(undefined4 *)(_UNK_02c71b00 + 0x2c71720));
    func_0x01438628(*(undefined4 *)(_UNK_02c71b04 + 0x2c7172c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x601d,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      if (param_2 == 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0x70);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = 0;
        if (1 < *(int *)(iVar1 + 0xc)) {
          iVar1 = *(int *)(param_1 + 0x8c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x70);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) < 2) {
            func_0x014388e8();
          }
          iVar2 = *(int *)(iVar1 + 0x14) * 0x3c;
        }
        iVar1 = *(int *)(param_1 + 0x8c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x7c);
      }
      else if (param_2 == 1) {
        if (*(int *)(**(int **)(_UNK_02c71b08 + 0x2c717a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar8 = *(undefined4 **)(_UNK_02c71b0c + 0x2c717c8);
        iVar1 = func_0x014e9518(*puVar8);
        uVar5 = *(undefined4 *)(param_1 + 0x8c);
        uVar7 = *(undefined4 *)(param_1 + 0x90);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02bd84dc(iVar1,uVar5,uVar7,0);
        iVar1 = func_0x014e9518(*puVar8);
        uVar5 = *(undefined4 *)(param_1 + 0x8c);
        uVar7 = *(undefined4 *)(param_1 + 0x90);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bd8354(iVar1,uVar5,uVar7,0);
      }
      else {
        if (*(int *)(**(int **)(_UNK_02c71b08 + 0x2c717a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c71b10 + 0x2c718cc));
        uVar5 = *(undefined4 *)(param_1 + 0x8c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02bd6714(iVar1,uVar5,0);
        iVar1 = *(int *)(param_1 + 0x8c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x94);
      }
      if ((((iVar1 != 0) && (1 < *(int *)(iVar1 + 0xc))) && (iVar2 != 0)) &&
         (*(int *)(iVar1 + 0x10) == 1)) {
        fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar10 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
        fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),
                                            (byte)(in_fpscr >> 0x16) & 3);
        fVar9 = (float)func_0x024f04b4((fVar10 / fVar9) * fVar11);
        iVar2 = (int)fVar9;
        if (fVar9 == _UNK_02c71af0) {
          iVar2 = -0x80000000;
        }
        piVar4 = (int *)(param_1 + 0xcc);
        *piVar4 = iVar2;
        iVar2 = *(int *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar1 + 0x14);
        *(int *)(param_1 + 0xd4) = param_2;
        uVar5 = func_0x01524ffc(piVar4,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x02032130(iVar2,uVar5,1,0);
        piVar6 = *(int **)(_UNK_02c71b14 + 0x2c719c8);
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b67abc(iVar1,0x47,0);
        if (iVar1 == 0) {
          iVar1 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02b67abc(iVar1,0x65,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(*piVar6 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02b67abc(iVar1,0x67,0);
            if (iVar1 == 0) {
              iVar1 = **(int **)(*piVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02b67abc(iVar1,0x66,0);
              if (iVar1 == 0) {
                iVar1 = **(int **)(*piVar6 + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x02b67abc(iVar1,100,0);
                if (iVar1 == 0) {
                  return;
                }
              }
            }
          }
        }
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02032130(iVar1,**(undefined4 **)(_UNK_02c71b18 + 0x2c71adc),1,0);
        *piVar4 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x601d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fcf2c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

