
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0327f724(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_0327fb98 + 0x327f744);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327fb9c + 0x327f758));
    func_0x01438628(*(undefined4 *)(_UNK_0327fba0 + 0x327f764));
    func_0x01438628(*(undefined4 *)(_UNK_0327fba4 + 0x327f770));
    func_0x01438628(*(undefined4 *)(_UNK_0327fba8 + 0x327f77c));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbac + 0x327f788));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbb0 + 0x327f794));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbb4 + 0x327f7a0));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbb8 + 0x327f7ac));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbbc + 0x327f7b8));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbc0 + 0x327f7c4));
    func_0x01438628(*(undefined4 *)(_UNK_0327fbc4 + 0x327f7d0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x812e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0327fbc8 + 0x327f834) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0327fbcc + 0x327f850));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_0327fbd0 + 0x327f894);
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
        iVar9 = FUN_03275bc8(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar9 + 0x70) != 6) {
          iVar7 = 0;
          iVar9 = 0;
          puVar10 = *(undefined4 **)(_UNK_0327fbdc + 0x327f92c);
          puVar12 = *(undefined4 **)(_UNK_0327fbe0 + 0x327f934);
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
            if (*(int *)(**(int **)(_UNK_0327fbe4 + 0x327f978) + 0x74) == 0) {
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
          iVar2 = func_0x0327fbf8(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_03275bc8(uVar8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar9) {
              iVar7 = FUN_03275bc8(uVar8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x04cfd760(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_0327fbe8 + 0x327faf8) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_0327fbec + 0x327fb20);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0327fbf0 + 0x327fb38));
                *pcVar6 = '\x01';
              }
              uVar8 = VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_0327fbf4 + 0x327fb54) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x05160af8(uVar8,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_0327fb94) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_0327fbd4 + 0x327fa38) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_0327fbd8 + 0x327fa5c),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x812e,0);
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

