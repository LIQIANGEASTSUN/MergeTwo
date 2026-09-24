
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bab750(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02babb38 + 0x2bab76c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02babb3c + 0x2bab780));
    func_0x01438628(*(undefined4 *)(_UNK_02babb40 + 0x2bab78c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cb6,0);
  if (iVar1 == 0) {
    piVar12 = *(int **)(_UNK_02babb44 + 0x2bab7ec);
    iVar1 = **(int **)(*piVar12 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar1 = func_0x02b67abc(iVar1,2,0);
    if (iVar1 != 0) {
      iVar1 = **(int **)(*piVar12 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b6105c(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar1 + 0x20)) {
        iVar1 = **(int **)(*piVar12 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = 0;
        iVar1 = func_0x02b6105c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x24)) {
          if (param_2 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02be9134(param_2,0);
          iVar10 = **(int **)(*piVar12 + 0x5c);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x02b6105c(iVar10,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(uint *)(iVar10 + 0x20);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar11) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + uVar11 * 4 + 0x10);
          if (param_2 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x02be9134(param_2,0);
          iVar8 = **(int **)(*piVar12 + 0x5c);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x02b6105c(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(uint *)(iVar8 + 0x24);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar11) {
            func_0x014388e8();
          }
          iVar10 = *(int *)(iVar10 + uVar11 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = 0;
          iVar8 = func_0x02c3f4b4(iVar1,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02c3f4b4(iVar10,0);
          if (iVar8 == iVar3) {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar2 = 0;
            uStack_28 = func_0x02c3f4b4(iVar1,0);
            uVar4 = func_0x01524ffc(&uStack_28,0);
            iVar8 = **(int **)(*piVar12 + 0x5c);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            uVar5 = func_0x02b667ac(iVar8,0);
            iVar8 = func_0x024eef64(uVar4,uVar5,0);
            if (iVar8 == 0) {
              func_0x02bac2e4(param_1,param_2,iVar1,iVar10);
              iVar8 = **(int **)(*piVar12 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              piVar12 = (int *)func_0x024eecb8(iVar1,0);
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar10 + 0xc);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              piVar6 = (int *)func_0x024eecb8(iVar1,0);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              piVar9 = (int *)0x0;
              if ((piVar12 != (int *)0x0) &&
                 (piVar9 = piVar12, *piVar12 != **(int **)(_UNK_02babb48 + 0x2babad8))) {
                piVar9 = (int *)0x0;
              }
              piVar12 = (int *)0x0;
              if ((piVar6 != (int *)0x0) &&
                 (piVar12 = piVar6, *piVar6 != **(int **)(_UNK_02babb48 + 0x2babad8))) {
                piVar12 = (int *)0x0;
              }
              uVar2 = 1;
              func_0x02b647b4(iVar8,2,piVar9,piVar12,0,1,0,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cb6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286b7bc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

