
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03013344(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_030137b8 + 0x3013364);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030137bc + 0x3013378));
    func_0x01438628(*(undefined4 *)(_UNK_030137c0 + 0x3013384));
    func_0x01438628(*(undefined4 *)(_UNK_030137c4 + 0x3013390));
    func_0x01438628(*(undefined4 *)(_UNK_030137c8 + 0x301339c));
    func_0x01438628(*(undefined4 *)(_UNK_030137cc + 0x30133a8));
    func_0x01438628(*(undefined4 *)(_UNK_030137d0 + 0x30133b4));
    func_0x01438628(*(undefined4 *)(_UNK_030137d4 + 0x30133c0));
    func_0x01438628(*(undefined4 *)(_UNK_030137d8 + 0x30133cc));
    func_0x01438628(*(undefined4 *)(_UNK_030137dc + 0x30133d8));
    func_0x01438628(*(undefined4 *)(_UNK_030137e0 + 0x30133e4));
    func_0x01438628(*(undefined4 *)(_UNK_030137e4 + 0x30133f0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x725a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030137e8 + 0x3013454) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030137ec + 0x3013470));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_030137f0 + 0x30134b4);
      iVar7 = func_0x04cfd760(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x28);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar7 + 0xc);
      iVar7 = func_0x04cfd760(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0x2c) * iVar9 == 6) {
        iVar9 = FUN_03009c84(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar9 + 0x70) != 6) {
          iVar7 = 0;
          iVar9 = 0;
          puVar10 = *(undefined4 **)(_UNK_030137fc + 0x301354c);
          puVar12 = *(undefined4 **)(_UNK_03013800 + 0x3013554);
          uStack_3c = param_1;
          while( true ) {
            iVar2 = func_0x04cfd760(iVar1,0,*puVar11);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x28);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar8 = uStack_3c;
            if (*(int *)(iVar2 + 0xc) <= iVar7) break;
            if (*(int *)(**(int **)(_UNK_03013804 + 0x3013598) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x04e4a028(*puVar10);
            iVar3 = func_0x04cfd760(iVar1,0,*puVar11);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x28);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x04cd26d0(iVar3,iVar7,*puVar12);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02be153c(iVar2,uVar8,0);
            if (iVar2 != 0) {
              iVar2 = func_0x04cfd760(iVar1,0,*puVar11);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar9 = *(int *)(iVar2 + 0x2c) + iVar9;
            }
            iVar7 = iVar7 + 1;
          }
          iVar2 = func_0x03013818(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_03009c84(uVar8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar9) {
              iVar7 = FUN_03009c84(uVar8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x04cfd760(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_03013808 + 0x3013718) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_0301380c + 0x3013740);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_03013810 + 0x3013758));
                *pcVar6 = '\x01';
              }
              uVar8 = VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_03013814 + 0x3013774) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x024f12bc(uVar8,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_030137b4) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_030137f4 + 0x3013658) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_030137f8 + 0x301367c),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x725a,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f56c0(auStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&stack0xffffffd0,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar8,&stack0xffffffd0,uVar5,0,0);
  iVar1 = func_0x024f56f0(&stack0xffffffd0,0,0);
  return iVar1;
}

