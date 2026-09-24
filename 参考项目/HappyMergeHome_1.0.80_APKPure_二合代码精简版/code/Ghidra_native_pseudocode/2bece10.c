
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bfce10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bfd350 + 0x2bfce28);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfd354 + 0x2bfce3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd358 + 0x2bfce48));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd35c + 0x2bfce54));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd360 + 0x2bfce60));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd364 + 0x2bfce6c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd368 + 0x2bfce78));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd36c + 0x2bfce84));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd370 + 0x2bfce90));
    func_0x01438628(*(undefined4 *)(_UNK_02bfd374 + 0x2bfce9c));
    *pcVar6 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x02953fd4(0x5ee8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ee8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
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
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    uVar8 = func_0x024f56e0(&uStack_30,0,0);
    return uVar8;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  piVar10 = *(int **)(_UNK_02bfd378 + 0x2bfcf04);
  do {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar9) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar9) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar1 + 0x10 + uVar9 * 4);
    if (iVar7 != 0) {
      uVar8 = *(undefined4 *)(iVar7 + 0xc);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024ef144(uVar8,0,0);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar7 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x11c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) == 3) {
          iVar2 = *(int *)(iVar7 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x1c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0x1c) == 99) {
            uVar8 = *(undefined4 *)(iVar7 + 0xc);
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x024eec50(uVar8,0,0);
            if (iVar1 == 0) {
              if ((*(int *)(param_1 + 0x50) != 0) && (1 < *(int *)(*(int *)(param_1 + 0x50) + 0xc)))
              {
                if (*(int *)(**(int **)(_UNK_02bfd37c + 0x2bfd138) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfd380 + 0x2bfd154));
                iVar2 = *(int *)(iVar7 + 0xc);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uVar8 = *(undefined4 *)(iVar2 + 0x1c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = FUN_02be5cb0(iVar1,uVar8,0);
                iVar2 = *(int *)(param_1 + 0x50);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                puVar3 = *(undefined4 **)(_UNK_02bfd384 + 0x2bfd1b4);
                iVar2 = func_0x0152983c(iVar2,0,*puVar3);
                if ((iVar1 != 0) && (iVar7 == iVar2)) {
                  iVar2 = *(int *)(param_1 + 0x50);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x0152983c(iVar2,1,*puVar3);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar8 = func_0x02c3f4b4(iVar2,0);
                  iVar2 = func_0x02b53c1c(iVar1,uVar8,0);
                  if (iVar2 != 0) {
                    return 1;
                  }
                }
                iVar2 = *(int *)(param_1 + 0x50);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = func_0x0152983c(iVar2,1,*puVar3);
                if ((iVar1 != 0) && (iVar7 == iVar2)) {
                  iVar2 = *(int *)(param_1 + 0x50);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x0152983c(iVar2,0,*puVar3);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar8 = func_0x02c3f4b4(iVar2,0);
                  iVar1 = func_0x02b53c1c(iVar1,uVar8,0);
                  if (iVar1 != 0) {
                    return 1;
                  }
                }
              }
              iVar1 = func_0x02bfd394(param_1,iVar7);
              if (iVar1 != 0) {
                if (*(int *)(iVar1 + 0xc) != 0) {
                  FUN_02bee744(param_1,0xffffffff,1);
                  iVar2 = *(int *)(param_1 + 0x50);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar4 = *(int *)(iVar2 + 0xc);
                  *(undefined4 *)(iVar2 + 0xc) = 0;
                  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                  if (0 < iVar4) {
                    func_0x01523bec(*(undefined4 *)(iVar2 + 8),0,iVar4,0);
                  }
                  iVar2 = *(int *)(param_1 + 0x50);
                  if (*(int *)(**(int **)(_UNK_02bfd388 + 0x2bfd08c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  uVar8 = func_0x0364a714(iVar1,0,**(undefined4 **)(_UNK_02bfd38c + 0x2bfd0b0));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar2 + 8);
                  uVar9 = *(uint *)(iVar2 + 0xc);
                  piVar10 = *(int **)(_UNK_02bfd390 + 0x2bfd0e8);
                  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                  iVar4 = *piVar10;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
                    *(uint *)(iVar2 + 0xc) = uVar9 + 1;
                    puVar3 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
                    *puVar3 = uVar8;
                    func_0x014385cc(puVar3,uVar8);
                  }
                  else {
                    func_0x0152874c(iVar2,uVar8,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  iVar1 = *(int *)(param_1 + 0x50);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar1 + 8);
                  uVar9 = *(uint *)(iVar1 + 0xc);
                  iVar4 = *piVar10;
                  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar9 < *(uint *)(iVar2 + 0xc)) {
                    *(uint *)(iVar1 + 0xc) = uVar9 + 1;
                    piVar10 = (int *)(iVar2 + uVar9 * 4 + 0x10);
                    *piVar10 = iVar7;
                    func_0x014385cc(piVar10,iVar7);
                  }
                  else {
                    func_0x0152874c(iVar1,iVar7,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  FUN_02bf1628(param_1,0xffffffff,0x3f800000);
                  return 1;
                }
                return 0;
              }
            }
            return 0;
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

