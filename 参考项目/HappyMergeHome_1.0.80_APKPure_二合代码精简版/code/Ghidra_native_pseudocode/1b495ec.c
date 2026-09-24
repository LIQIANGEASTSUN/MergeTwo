
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b595ec(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r10;
  undefined4 *puVar13;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar9 = (char *)(_UNK_01b59d4c + 0x1b59600);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b59d50 + 0x1b59614));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d54 + 0x1b59620));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d58 + 0x1b5962c));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d5c + 0x1b59638));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d60 + 0x1b59644));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d64 + 0x1b59650));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d68 + 0x1b5965c));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d6c + 0x1b59668));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d70 + 0x1b59674));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d74 + 0x1b59680));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d78 + 0x1b5968c));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d7c + 0x1b59698));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d80 + 0x1b596a4));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d84 + 0x1b596b0));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d88 + 0x1b596bc));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d8c + 0x1b596c8));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d90 + 0x1b596d4));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d94 + 0x1b596e0));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d98 + 0x1b596ec));
    func_0x01438628(*(undefined4 *)(_UNK_01b59d9c + 0x1b596f8));
    func_0x01438628(*(undefined4 *)(_UNK_01b59da0 + 0x1b59704));
    func_0x01438628(*(undefined4 *)(_UNK_01b59da4 + 0x1b59710));
    func_0x01438628(*(undefined4 *)(_UNK_01b59da8 + 0x1b5971c));
    func_0x01438628(*(undefined4 *)(_UNK_01b59dac + 0x1b59728));
    func_0x01438628(*(undefined4 *)(_UNK_01b59db0 + 0x1b59734));
    func_0x01438628(*(undefined4 *)(_UNK_01b59db4 + 0x1b59740));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x02953fd4(0x1898,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01b59db8 + 0x1b597b4));
    func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01b59dbc + 0x1b597c8));
    iVar3 = FUN_01b57128();
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x024ef08c(iVar3,**(undefined4 **)(_UNK_01b59dc0 + 0x1b597f0));
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01b59dc4 + 0x1b59808));
    func_0x024f108c(iVar3,uVar4,**(undefined4 **)(_UNK_01b59dc8 + 0x1b59820));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar12 = *(int *)(iVar3 + 0xc) - 1;
    if (-1 < (int)uVar12) {
      puVar13 = *(undefined4 **)(_UNK_01b59dcc + 0x1b59858);
      do {
        iVar5 = FUN_01b57128();
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = func_0x0152983c(iVar3,uVar12,**(undefined4 **)(_UNK_01b59dd0 + 0x1b5987c));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f04d4(iVar5,uVar4,**(undefined4 **)(_UNK_01b59dd4 + 0x1b598a4));
        iVar6 = FUN_01b58f74();
        if (iVar5 != 0) {
          if (iVar6 != 0) {
            unaff_r10 = *(int *)(iVar5 + 0x18);
          }
          if (iVar6 != 0 && unaff_r10 != 0) {
            iVar5 = 0;
            while( true ) {
              iVar6 = *(int *)(unaff_r10 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
                iVar7 = iRam0000000c;
                iVar6 = *(int *)(unaff_r10 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                  iVar6 = 0;
                }
              }
              else {
                iVar7 = *(int *)(iVar6 + 0xc);
              }
              if (iVar7 <= iVar5) break;
              uVar4 = func_0x024f05a4(iVar6,iVar5,**(undefined4 **)(_UNK_01b59dd8 + 0x1b59930));
              iVar6 = *(int *)(unaff_r10 + 0x30);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f0f34(iVar6,uVar4,*puVar13);
              if (iVar6 == 0) {
                iVar6 = *(int *)(unaff_r10 + 0x10);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x024f0540(iVar6,uVar4,**(undefined4 **)(_UNK_01b59ddc + 0x1b59984));
                if (iVar6 == 0) {
                  iVar6 = *(int *)(unaff_r10 + 0x10);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f10d0(iVar6,uVar4,0,**(undefined4 **)(_UNK_01b59de0 + 0x1b599b8));
                }
                iVar6 = *(int *)(unaff_r10 + 0x10);
                if (iVar6 == 0) {
                  func_0x014388e4();
                  iVar7 = func_0x024f05d4(0,uVar4,**(undefined4 **)(_UNK_01b59de8 + 0x1b59a00));
                  func_0x014388e4();
                }
                else {
                  iVar7 = func_0x024f05d4(iVar6,uVar4,**(undefined4 **)(_UNK_01b59de4 + 0x1b599dc));
                }
                func_0x024f10d4(iVar6,uVar4,iVar7 + 1,**(undefined4 **)(_UNK_01b59dec + 0x1b59a24));
              }
              iVar5 = iVar5 + 1;
            }
            func_0x024f04c8(iVar6,**(undefined4 **)(_UNK_01b59df0 + 0x1b59a40));
            iVar5 = *(int *)(unaff_r10 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f0ed8(&uStack_58,iVar5,**(undefined4 **)(_UNK_01b59df4 + 0x1b59a6c));
            uStack_40 = uStack_58;
            uStack_3c = uStack_54;
            uStack_38 = uStack_50;
            iStack_34 = iStack_4c;
            uStack_30 = uStack_48;
            bVar1 = false;
            do {
              puVar10 = *(undefined4 **)(_UNK_01b59e00 + 0x1b59a9c);
              do {
                do {
                  do {
                    iVar6 = func_0x015144ec(&uStack_40,*puVar10);
                    iVar5 = iStack_34;
                    if (iVar6 == 0) {
                      func_0x024f0ee8(&uStack_40,**(undefined4 **)(_UNK_01b59e04 + 0x1b59bf0));
                      iVar5 = *(int *)(unaff_r10 + 0x10);
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar5 = func_0x024f0540(iVar5,0xbb9,
                                              **(undefined4 **)(_UNK_01b59e0c + 0x1b59c1c));
                      if (iVar5 != 0) {
                        iVar5 = *(int *)(unaff_r10 + 0x10);
                        if (iVar5 == 0) {
                          func_0x014388e4();
                        }
                        func_0x024f10d8(iVar5,0xbb9,**(undefined4 **)(_UNK_01b59e10 + 0x1b59c4c));
                      }
                      if (bVar1) {
                        func_0x026bfc74(unaff_r10,1,0);
                      }
                      else {
                        iVar5 = *(int *)(unaff_r10 + 0x10);
                        if (iVar5 == 0) {
                          func_0x014388e4();
                        }
                        func_0x024f0570(iVar5,**(undefined4 **)(_UNK_01b59e18 + 0x1b59c90));
                      }
                      goto LAB_01b598cc;
                    }
                  } while (iStack_34 == 0xbb9);
                  iVar7 = *(int *)(unaff_r10 + 0x30);
                  iVar6 = (int)uStack_30;
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x024f0f34(iVar7,iVar5,*puVar13);
                } while (iVar7 != 0);
                iVar7 = *(int *)(unaff_r10 + 0x48);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f0f34(iVar7,iVar5,*puVar13);
              } while (iVar6 < 1 || iVar7 != 0);
              uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01b59df8 + 0x1b59b28));
              func_0x02ca3c70(uVar4,iVar5,iVar6,0,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar2 + 8);
              uVar11 = *(uint *)(iVar2 + 0xc);
              piVar8 = *(int **)(_UNK_01b59dfc + 0x1b59b80);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar6 = *piVar8;
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (uVar11 < *(uint *)(iVar5 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar11 + 1;
                puVar10 = (undefined4 *)(iVar5 + uVar11 * 4 + 0x10);
                *puVar10 = uVar4;
                bVar1 = true;
                func_0x014385cc(puVar10,uVar4);
              }
              else {
                bVar1 = true;
                func_0x0152874c(iVar2,uVar4,
                                *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
              }
            } while( true );
          }
        }
LAB_01b598cc:
        uVar12 = uVar12 - 1;
      } while (uVar12 < 0x80000000);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x1898,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x028a054c(iVar2,0);
  }
  return iVar2;
}

