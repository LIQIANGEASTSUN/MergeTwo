
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f9f650(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_02f9fac4 + 0x2f9f670);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9fac8 + 0x2f9f684));
    func_0x01438628(*(undefined4 *)(_UNK_02f9facc + 0x2f9f690));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fad0 + 0x2f9f69c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fad4 + 0x2f9f6a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fad8 + 0x2f9f6b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fadc + 0x2f9f6c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fae0 + 0x2f9f6cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fae4 + 0x2f9f6d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9fae8 + 0x2f9f6e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9faec + 0x2f9f6f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9faf0 + 0x2f9f6fc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6f59,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f9faf4 + 0x2f9f760) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9faf8 + 0x2f9f77c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_02f9fafc + 0x2f9f7c0);
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
        iVar9 = FUN_02f95f8c(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar9 + 0x70) != 6) {
          iVar7 = 0;
          iVar9 = 0;
          puVar10 = *(undefined4 **)(_UNK_02f9fb08 + 0x2f9f858);
          puVar12 = *(undefined4 **)(_UNK_02f9fb0c + 0x2f9f860);
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
            if (*(int *)(**(int **)(_UNK_02f9fb10 + 0x2f9f8a4) + 0x74) == 0) {
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
          iVar2 = func_0x02f9fb24(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_02f95f8c(uVar8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar9) {
              iVar7 = FUN_02f95f8c(uVar8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x04cfd760(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_02f9fb14 + 0x2f9fa24) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_02f9fb18 + 0x2f9fa4c);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_02f9fb1c + 0x2f9fa64));
                *pcVar6 = '\x01';
              }
              uVar8 = VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_02f9fb20 + 0x2f9fa80) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x024f12bc(uVar8,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_02f9fac0) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_02f9fb00 + 0x2f9f964) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_02f9fb04 + 0x2f9f988),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x6f59,0);
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

